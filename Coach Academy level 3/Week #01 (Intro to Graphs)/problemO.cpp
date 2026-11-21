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
vector<int> vis, cat;
int countres = 0;

void dfs(int node , int conscats)
{
    if(cat[node])
    conscats++;
    else
    conscats = 0;

    if(conscats > m)
    return;

    vis[node] = true;
    bool isleaf = true;

    for(int i : adj[node]){
        if(!vis[i]){
            dfs(i,conscats);
            isleaf = false;
        }
    }

    if(isleaf)
    countres++;
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);
    cat.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> cat[i];

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1 , 0);

    cout << countres;
    return 0;
}
