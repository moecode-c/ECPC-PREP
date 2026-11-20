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
vector<vector<int>> adj;
vector<int> depth, vis , maxdepth;
int maxnum = 0;

void dfs(int node)
{
    vis[node] = true;

    for (int i : adj[node])
    {
        if (vis[i] == 0)
        {
            depth[i] =  depth[node] + 1;
            maxnum = max(depth[i], maxnum);
            dfs(i);
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n;
    adj.assign(n + 1, {});
    depth.assign(n + 1, 0);
    maxdepth.assign(n + 1, 0);
    vis.assign(n + 1, 0);

    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);
    int A = 1;
    for (int i = 1; i <= n; i++)
        if (depth[i] > depth[A]) A = i;

    vis.assign(n + 1, 0);
    depth.assign(n + 1, 0);
    dfs(A);
    int B = A;
    for (int i = 1; i <= n; i++)
    {
        maxdepth[i] = depth[i];
        if (depth[i] > depth[B]) B = i;
    }

    vis.assign(n + 1, 0);
    depth.assign(n + 1, 0);
    dfs(B);
    for (int i = 1; i <= n; i++)
        maxdepth[i] = max(maxdepth[i], depth[i]);

    for (int i = 1; i <= n; i++)
    {
        cout << maxdepth[i] << " ";
    }
    return 0;
}