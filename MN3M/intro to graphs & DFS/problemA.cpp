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
vector<int> cats;
vector<vector<int>> adj;
vector<bool> vis;
int sum;

void dfs(int node, int numcats)
{
    vis[node] = true;

    if (numcats > m)
        return;

    bool leaf = true;

    for (int u : adj[node])
    {
        if (!vis[u])
        {
            leaf = false;
            if (cats[u] == 1)
                dfs(u, numcats + 1);
            else
                dfs(u, 0);
        }
    }

    if (leaf)
    {
        sum += 1;
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    vis.assign(n + 1, false);
    cats.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    sum = 0;
    if (cats[1] == 1)
        dfs(1, 1);
    else
        dfs(1, 0);

    cout << sum;
    return 0;
}