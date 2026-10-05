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
vector<int> parent;
vector<int> cycle;
bool hascycle = false;

void dfs(int u, int p)
{
    state[u] = 1;
    parent[u] = p;

    for (int v : adj[u])
    {
        if (hascycle)
            return;

        if (state[v] == 0)
            dfs(v, u);
        else if (state[v] == 1)
        {
            cycle.push_back(v);
            int cur = u;
            while (cur != v)
            {
                cycle.push_back(cur);
                cur = parent[cur];
            }
            cycle.push_back(v);
            reverse(all(cycle));
            hascycle = true;
            return;
        }
    }

    state[u] = 2;
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    state.assign(n + 1, 0);
    parent.assign(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    for (int i = 1; i <= n and !hascycle; i++)
    {
        if (state[i] == 0)
            dfs(i, 0);
    }

    if (!hascycle)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    cout << cycle.size() << "\n";
    for (int x : cycle)
        cout << x << " ";

    return 0;
}