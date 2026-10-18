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
vector<int> dist;
 
void dijkstra()
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    
    dist[1] = 0;
    pq.push({0,1});
 
    while (!pq.empty())
    {
        auto [pw, pnode] = pq.top();
        pq.pop();
 
        if (pw > dist[pnode])
            continue;
 
        for (auto [cw, cnode] : adj[pnode])
        {
            if (pw + cw < dist[cnode])
            {
                dist[cnode] = pw + cw;
                pq.push({(pw+cw), cnode});
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
    }
 
    dist.assign(n + 1, (int)1e18);
    dijkstra();
 
    for (int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    return 0;
}