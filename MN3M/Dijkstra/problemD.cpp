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
int n, m , sn , tn;
vector<vector<pair<int, int>>> adj;
vector<int> dist;

void dijkstra()
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    pq.push({0, sn});
    dist[sn] = 0;

    while (!pq.empty())
    {
        auto [pw, pnode] = pq.top();
        pq.pop();

        if (pw > dist[pnode])
            continue;

        if(pnode == tn)
        return;

        for (auto [cw, cnode] : adj[pnode])
        {
            if (cw + pw < dist[cnode])
            {
                dist[cnode] = cw + pw;
                pq.push({(cw + pw), cnode});
            }
        }
    }
}

int32_t main()
{
    fast_io();

    int t;
    int tc = 1;
    cin >> t;
    while (tc != t + 1)
    {
        cin >> n >> m >> sn >> tn;
        adj.assign(n + 1, {});
        for (int i = 1; i <= m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({c, b});
            adj[b].push_back({c, a});
        }
        dist.assign(n + 1, 1e18);
        dijkstra();

        if(dist[tn] == 1e18){
            cout << "Case #" << tc << ": unreachable" << '\n';
        }
        else{
            cout << "Case #" << tc << ": " << dist[tn] << '\n';
        }

        tc++;
    }

    return 0;
}
