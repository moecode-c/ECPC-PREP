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
vector<vector<int>> adj , components;
vector<int> vis , comp;

void dfs(int node)
{
    vis[node] = true;
    comp.push_back(node);

    for (int i : adj[node])
    {
        if (!vis[i])
            dfs(i);
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            comp.clear();
            dfs(i);
            components.push_back(comp);
        }
    }

    int count = 0;
    for (auto comp : components)
    {
        bool can = true;
        for (int v : comp)
        {
            if (adj[v].size() != 2)
            {
                can = false;
                break;
            }
        }
        if (can)
            count++;
    }

    cout << count << '\n';
    return 0;
}