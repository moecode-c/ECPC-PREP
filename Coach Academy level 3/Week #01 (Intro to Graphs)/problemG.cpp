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
vector<int> vis, trip, par;
bool can = false;

void dfs(int node)
{
    if (can)
        return;

    vis[node] = true;

    for (int i : adj[node])
    {
        if (can)
            return;
        if (vis[i] == 0)
        {
            par[i] = node;
            dfs(i);
        }
        else if (i != par[node])
        {
            int x = node;
            trip.push_back(x);
            while (x != i)
            {
                x = par[x];
                trip.push_back(x);
            }
            trip.push_back(node);
            can = true;
            return;
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    par.assign(n + 1, 0);
    vis.assign(n + 1, 0);

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
            dfs(i);
        if (can)
            break;
    }

    if (!can)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    cout << trip.size() << '\n';
    for (auto i : trip)
    {
        cout << i << " ";
    }

    return 0;
}