#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, m;
vector<vector<ll>> adj;
vector<bool> vis;
vector<vector<ll>> components;
vector<ll> prices;

void dfs(ll u, vector<ll>& comp)
{
    vis[u] = true;
    comp.push_back(u);

    for (ll node : adj[u])
    {
        if (!vis[node])
        {
            dfs(node, comp);
        }
    }
}

int main()
{
    fast_io();

    ll n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    vis.assign(n + 1, false);

    prices.resize(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> prices[i];
    }

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<ll> comp;

            dfs(i, comp);

            components.push_back(comp);
        }
    }

    ll sum = 0;

    for (ll i = 0; i < components.size(); i++)
    {
        ll num = 2e9 + 5;
        for (int j = 0; j < components[i].size(); j++)
        {
            num = min(num,prices[components[i][j]]);
        }
        sum += num;
    }

    cout << sum << endl;

    return 0;
}
