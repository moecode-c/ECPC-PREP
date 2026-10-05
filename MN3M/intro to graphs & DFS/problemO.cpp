#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).rbegin(), (x).rend()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, k;
vector<vector<int>> adj;
vector<pair<int, int>> leaves;

void dfs(int node, int parent, int dist)
{
    bool isleaf = true;

    for (int u : adj[node])
    {
        if (u == parent)
            continue;

        isleaf = false;
        dfs(u, node, dist + 1);
    }

    if (isleaf)
    {
        leaves.push_back({dist, node});
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> k;
    adj.resize(n + 1);
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, -1, 0);

    sort(all(leaves));
    // for(auto i : leaves){
    //    cout << i.first << "   " << i.second << "  ||  " << endl;
    // }
    int sum = 0;
    while (k != 0)
        for (int i = 0; i < leaves.size(); i++)
        {
            sum += leaves[i].first;
            leaves[i].first -= 1;
            k--;
            if (k == 0)
            {
                break;
            }
        }
    cout << sum;
    return 0;
}
