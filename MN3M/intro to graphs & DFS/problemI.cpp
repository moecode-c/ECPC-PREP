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
vector<int> color;
bool ok = true;

void dfs(int u, int c)
{
    color[u] = c;

    for (int v : adj[u])
    {
        if (color[v] == 0)
            dfs(v, 3 - c);
        else if (color[v] == c)
            ok = false;
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    color.assign(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
            dfs(i, 1);
    }

    if (!ok)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    for (int i = 1; i <= n; i++)
        cout << color[i] << " ";

    return 0;
}