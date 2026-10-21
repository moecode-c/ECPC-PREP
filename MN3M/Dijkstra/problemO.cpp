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
vector<vector<int>> dist;

void dijkstra()
{
    dist.assign(n + 1, vector<int>(2, 1e18));
    priority_queue<tuple<int, int, int>,
                   vector<tuple<int, int, int>>,
                   greater<tuple<int, int, int>>>
        pq;

    dist[1][0] = 0;
    pq.push({0, 1, 0});

    while (!pq.empty())
    {
        auto [d, u, f] = pq.top();
        pq.pop();

        if (d > dist[u][f])
            continue;

        for (auto [v, c] : adj[u])
        {
            if (d + c < dist[v][f])
            {
                dist[v][f] = d + c;
                pq.push({dist[v][f], v, f});
            }

            if (f == 0 && d + c / 2 < dist[v][1])
            {
                dist[v][1] = d + c / 2;
                pq.push({dist[v][1], v, 1});
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
        adj[a].push_back({b, c});
    }

    dijkstra();
    cout << dist[n][1];
    return 0;
}