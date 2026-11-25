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

vector<vector<int>> adj;
vector<int> vis , order;
bool can = true;

void dfs(int node)
{
    vis[node] = 1;
    for (int v : adj[node])
    {
        if (vis[v] == 1)
        {
            can = false;
        }
        else if (vis[v] == 0)
        {
            dfs(v);
        }
    }
    vis[node] = 2;
    order.push_back(node);
}

int32_t main()
{
    fast_io();
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    adj.assign(26, {});
    vis.assign(26, 0);
    for (int i = 0; i + 1 < n; i++)
    {
        string &a = s[i];
        string &b = s[i + 1];
        int len = min(a.size(), b.size());
        int j = 0;
        while (j < len && a[j] == b[j])
        {
            j++;
        }
        if (j == len)
        {
            if (a.size() > b.size())
            {
                can = false;
            }
            continue;
        }
        int u = a[j] - 'a';
        int v = b[j] - 'a';
        adj[u].push_back(v);
    }
    if (!can)
    {
        cout << "Impossible\n";
        return 0;
    }
    for (int i = 0; i < 26; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }
    if (!can)
    {
        cout << "Impossible\n";
        return 0;
    }
    reverse(all(order));
    string res;
    for (int u : order)
    {
        res += char('a' + u);
    }
    cout << res << "\n";
    return 0;
}