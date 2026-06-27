#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, m;
vector<vector<int>> adj;
vector<int> dp;

int dfs(int node)
{
    if (adj[node].size() == 0)
        return 0;

    int &res = dp[node];
    if(~res) return res;

    for(int i : adj[node]){
        res = max(res , dfs(i) + 1);
    }

    return res;
}

int main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    dp.assign(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int maxnum =0;
    for (int i = 1; i <= n; i++)
    {
        maxnum = max(maxnum , dfs(i));
    }
    

    cout << maxnum;
    return 0;
}
