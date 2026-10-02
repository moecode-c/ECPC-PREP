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
vector<int> cost;
vector<bool> vis;
int best;

void dfs(int u)
{
    vis[u] = true;
    best = min(best, cost[u]);

    for (int v : adj[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    cost.resize(n + 1);
    vis.assign(n + 1, false);

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            best = 1e18;
            dfs(i);
            ans += best;
        }
    }

    cout << ans;
    return 0;
}