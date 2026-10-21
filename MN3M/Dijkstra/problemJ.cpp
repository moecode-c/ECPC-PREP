#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, m, T;
vector<vector<tuple<int, int, int>>> adj;
vector<int> dist;

int dijkstra(int L)
{
    dist.assign(n + 1, (int)1e18);
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        auto [pw, pnode] = pq.top();
        pq.pop();

        if (pw > dist[pnode])
            continue;

        for (auto [cnode, cw, s] : adj[pnode])
        {
            if (s > L)
                continue;

            if (pw + cw < dist[cnode])
            {
                dist[cnode] = pw + cw;
                pq.push({dist[cnode], cnode});
            }
        }
    }
    return dist[n];
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    for (int i = 0; i < m; i++)
    {
        int x, y, d, s;
        cin >> x >> y >> d >> s;
        adj[x].push_back({y, d, s});
        adj[y].push_back({x, d, s});
    }
    cin >> T;

    int MAXL = 1000000;
    if (dijkstra(MAXL) > T)
    {
        cout << "NO";
        return 0;
    }

    int lo = 1, hi = MAXL, ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (dijkstra(mid) <= T)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }

    cout << "YES\n" << ans << " " << dijkstra(ans);
    return 0;
}