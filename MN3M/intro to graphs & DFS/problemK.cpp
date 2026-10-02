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
vector<int> state;
vector<int> order;
bool hasCycle = false;

void dfs(int u)
{
    state[u] = 1;

    for (int v : adj[u])
    {
        if (state[v] == 0)
            dfs(v);
        else if (state[v] == 1)
            hasCycle = true;
    }

    state[u] = 2;
    order.push_back(u);
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    state.resize(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    for (int i = 1; i <= n; i++)
    {
        if (state[i] == 0)
            dfs(i);
    }

    if (hasCycle)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    reverse(all(order));
    for (int x : order)
        cout << x << " ";

    return 0;
}