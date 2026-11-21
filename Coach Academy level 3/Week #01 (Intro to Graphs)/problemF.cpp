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
vector<int> vis, col;
bool can = true;

void dfs(int node, int color)
{
    if(!can) return;

    vis[node] = true;

    for (int i : adj[node])
    {
        if (vis[i] == 0)
        {
            col[i] = 3 - color;
            dfs(i, 3 - color);
        }
        else if(col[i] == color){
            can = false;
            return;
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);
    col.assign(n+1,0);

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
        {
            col[i] = 2;
            dfs(i, 2);
        }
    }

    if(!can)
    cout << "IMPOSSIBLE";
    else{
        for(int i = 1 ; i <= n ; i++)
        cout << col[i] << " ";
    }

    return 0;
}