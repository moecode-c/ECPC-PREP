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
vector<vector<int>> adj;
vector<vector<int>> comps;
vector<bool> vis;
int n, m;

void dfs(int node, vector<int> &comp)
{
    vis[node] = true;
    comp.push_back(node);

    for (int u : adj[node])
    {
        if (!vis[u])
            dfs(u, comp);
    }
}

int32_t main()
{
    fast_io();
    cin >> n >> m;
    adj.resize(n + 1);
    vis.resize(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<int> comp;
            dfs(i, comp);
            comps.push_back(comp);
        }
    }

    int danger = 1;
    int sum = 0;
    for (int i = 0; i < comps.size(); i++)
    {
        sum += (comps[i].size() - 1);
    }

    if(sum != 0)
    danger = pow(2,sum);

    cout << danger;
    return 0;
}
