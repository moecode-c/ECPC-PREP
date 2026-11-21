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
vector<char> order;
bool can = true;

void dfs(int node, int par)
{
    if (!can)
        return;

    vis[node] = true;

    for (int i : adj[node])
    {
        if (!vis[i])
        {
            dfs(i, par);
        }
        else if (i != par and vis[i] == 1)
        {
            can = false;
            return;
        }
    }

    vis[node] = 2;
    order.push_back(node + 'A' - 1);
}

int32_t main()
{
    fast_io();

    adj.assign(6, {});
    vis.assign(6, 0);

    for (int i = 0; i < 5; i++)
    {
        char ch1, op, ch2;
        cin >> ch1 >> op >> ch2;
        if (op == '>')
        {
            adj[ch1 - 'A' + 1].push_back(ch2 - 'A' + 1);
        }
        else
        {
            adj[ch2 - 'A' + 1].push_back(ch1 - 'A' + 1);
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        if (!vis[i])
            dfs(i, 0);
    }

    if (can)
    {
        for (auto i : order)
        {
            cout << i;
        }
    }
    else
    {
        cout << "impossible";
    }
    return 0;
}
