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
int n, m, q;
vector<vector<pair<int, int>>> adj;
vector<int> vis;
bool can;

void dfs(int node, int colorcur, int target)
{
    if (node == target)
    {
        can = true;
    }
    vis[node] = true;

    for (auto i : adj[node])
    {
        if (colorcur == i.second and !vis[i.first])
        {
            dfs(i.first, colorcur , target);
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
    }

    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        int count = 0;
        for (int curcolor = 1; curcolor <= m; curcolor++)
        {
            can = false;
            vis.assign(n + 1, 0);
            dfs(u, curcolor , v);
            count += can;
        }
        cout << count << "\n";
    }

    return 0;
}
