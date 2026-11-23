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
int n;
string s;
vector<vector<int>> adj;
vector<int> vis, subtree;

void dfs(int node)
{
    vis[node] = true;
    if (s[node - 1] == 'B')
        subtree[node] = 1;
    else
        subtree[node] = -1;

    for (int i : adj[node])
    {
        if (!vis[i])
        {
            if (s[node - 1] == 'B')
            {
                dfs(i);
                subtree[node] += subtree[i];
            }
            else
            {
                dfs(i);
                subtree[node] += subtree[i];
            }
        }
    }
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        adj.assign(n + 1, {});
        vis.assign(n + 1, 0);
        subtree.assign(n + 1, 0);
        for (int i = 2; i <= n; i++)
        {
            int num;
            cin >> num;
            adj[i].push_back(num);
            adj[num].push_back(i);
        }
        cin >> s;
        dfs(1);

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(subtree[i] == 0)
            count++;
        }

        cout << count << '\n';
    }

    return 0;
}
