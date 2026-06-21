#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<vector<int>> adj;
vector<bool> vis;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int dfs(int u)
{
    vis[u] = true;
    int sz = 1;

    for (int v : adj[u])
    {
        if (!vis[v])
        {
            sz += dfs(v);
        }
    }

    return sz;
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        adj.resize(n + 1);
        vis.assign(n + 1, false);

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int mx = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                mx = max(mx, dfs(i));
            }
        }

        cout << mx << '\n';
        adj.clear();
        vis.clear();
    }

    return 0;
}
