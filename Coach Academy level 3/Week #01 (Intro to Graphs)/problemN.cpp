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

vector<vector<int>> adj , components;
vector<int> vis , comp;

void dfs(int node)
{
    vis[node] = true;
    comp.push_back(node);
    for (int v : adj[node])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

int32_t main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> x(n) , y(n);
    adj.assign(n , {});
    vis.assign(n , 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int u = 0; u < n; u++)
    {
        for (int v = u + 1; v < n; v++)
        {
            if (x[u] == x[v] || y[u] == y[v])
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            comp.clear();
            dfs(i);
            components.push_back(comp);
        }
    }
    int count = components.size() - 1;
    cout << count << "\n";
    return 0;
}