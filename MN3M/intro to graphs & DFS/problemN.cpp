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
vector<int> vis;

void dfs(int node)
{
    vis[node] = true;

    for (int u : adj[node])
    {
        if (!vis[u])
            dfs(u);
    }
}

int32_t main()
{
    fast_io();
    cin >> n >> m;
    if (m != n - 1)
    {
        cout << "NO";
        return 0;
    }

    adj.resize(n + 1);
    vis.assign(n + 1, false);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
