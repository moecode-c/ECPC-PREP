#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int u)
{
    vis[u] = true;

    for (int v : adj[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (m != n - 1)
    {
        cout << "NO\n";
        return 0;
    }

    adj.resize(n + 1);
    vis.assign(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}