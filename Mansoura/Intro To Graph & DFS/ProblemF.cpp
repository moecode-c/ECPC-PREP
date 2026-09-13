#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<vector<int>> adj;
vector<vector<int>> components;

vector<bool> vis;

void dfs(int u , vector<int>& comp)
{
    vis[u] = true;
    comp.push_back(u);

    for (int node : adj[u])
    {
        if (!vis[node]){
            
            dfs(node,comp);
        }
    }
}

int main()
{
    fast_io();

    int n, m;

    cin >> n >> m;

    adj.resize(n+1);
    vis.assign(n+1,false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            vector<int> comp;

            dfs(i , comp);

            components.push_back(comp);
        }
    }


    cout << components.size()-1 << endl;
    for(int i = 0 ; i < components.size() - 1 ; i++)
    {
        cout << components[i][0] << " " << components[i+1][0] << endl;
    }
    return 0;
}
