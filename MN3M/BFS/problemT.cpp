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
vector<vector<int>> adj;
vector<bool> vis;
vector<int> par;

void bfs(int node)
{
    queue<int> q;
    vis[node] = true;
    q.push(node);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(!vis[v]){
                par[v] = u;
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    vis.assign(n+1,false);
    par.assign(n+1,-1);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);

    if(!vis[n]){
        cout << "IMPOSSIBLE";
    }
    else{
        int count = 1;
        vector<int> vp;
        int curnode = n;
        while(curnode != 1){
            vp.push_back(curnode);
            count++;
            curnode = par[curnode];
        }
        vp.push_back(1);
        reverse(all(vp));
        cout << count << endl;
        for(auto i : vp){
            cout << i << " ";
        }
    }

    

    return 0;
}
