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

const int MOD = 1e9 + 7;
int n, m;
vector<vector<pair<int, int>>> adj;
vector<int> dist, cnt, mn, mx;

void dijkstra()
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    dist.assign(n + 1, (int)1e18);
    cnt.assign(n + 1, 0);
    mn.assign(n + 1, 0);
    mx.assign(n + 1, 0);

    dist[1] = 0;
    cnt[1] = 1;
    pq.push({0, 1});

    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, c] : adj[u])
        {
            int nd = d + c;
            if (nd < dist[v])
            {
                dist[v] = nd;
                cnt[v] = cnt[u];
                mn[v] = mn[u] + 1;
                mx[v] = mx[u] + 1;
                pq.push({nd, v});
            }
            else if (nd == dist[v])
            {
                cnt[v] = (cnt[v] + cnt[u]) % MOD;
                mn[v] = min(mn[v], mn[u] + 1);
                mx[v] = max(mx[v], mx[u] + 1);
            }
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c}); // one-way
    }

    dijkstra();
    cout << dist[n] << " " << cnt[n] << " " << mn[n] << " " << mx[n];
    return 0;
}