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

int n, m, st, en;
vector<vector<pair<int, int>>> adj;
vector<int> dist;

void dijkstra()
{
    
    priority_queue < pair<int, int>, 
        vector<pair<int, int>>,
        greater<pair<int, int>>> pq;
    
    dist[st] = 0;
    pq.push({0,st});

    while(!pq.empty()){
        auto [nw,node] = pq.top();
        pq.pop();

        if (nw > dist[node]) continue;

        for(auto [cw , cnode] : adj[node]){
            if(nw + cw < dist[cnode]){
                dist[cnode] = nw + cw;
                pq.push({(nw+cw),cnode});
            }
        }
    }
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> st >> en;

        adj.assign(n + 1 , {});
        for (int i = 1; i <= m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({c, b});
            adj[b].push_back({c, a});
        }
        dist.assign(n + 1, 1e18);
        dijkstra();

        if(dist[en] == 1e18)
        cout << "NONE" << '\n';
        else
        cout << dist[en] << '\n';
    }

    return 0;
}
