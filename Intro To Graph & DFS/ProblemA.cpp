#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void calcadj(vector<vector<int>> &adjlist, int m)
{

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

int main()
{
    fast_io();

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);

    calcadj(adj, m);

    for(int i = 1 ; i <= n ; i++){
        cout << adj[i].size() << endl;
    }

    return 0;
}
