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

int n, m;
vector<vector<pair<int, int>>> adj;
vector<int> dist, hut;

void dijkstra()
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    for (int i = 1; i <= n; i++)
    {
        dist[i] = hut[i];
        pq.push({dist[i], i});
    }

    while (!pq.empty())
    {
        auto [pw, pnode] = pq.top();
        pq.pop();

        if (pw > dist[pnode])
            continue;

        for (auto [cw, cnode] : adj[pnode])
        {
            if (pw + 2 * cw < dist[cnode])
            {
                dist[cnode] = pw + 2 * cw;
                pq.push({dist[cnode], cnode});
            }
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    hut.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> hut[i];

    dist.assign(n + 1, (int)1e18);
    dijkstra();

    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    return 0;
}