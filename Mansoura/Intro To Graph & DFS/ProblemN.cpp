#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int tc = 0;
int n;
double d;
vector<vector<int>> adj;
vector<bool> vis;
vector<double> xvec, yvec;

void dfs(int u)
{
    vis[u] = true;

    for (int node : adj[u])
    {
        if (!vis[node])
        {
            dfs(node);
        }
    }
}

double dis(double i, double j)
{
    return sqrt(((xvec[i] - xvec[j]) * (xvec[i] - xvec[j])) + ((yvec[i] - yvec[j]) * (yvec[i] - yvec[j])));
}
int main()
{
    fast_io();

    int t;
    cin >> t;
    
    while (t--)
    {
        cin >> n >> d;

        adj.assign(n, {});
        vis.assign(n, false);
        xvec.assign(n,0);
        yvec.assign(n,0);
        for (int i = 0; i < n; i++)
        {

            cin >> xvec[i] >> yvec[i];
            for (int j = 0; j < i; j++)
            {
                if (dis(i, j) <= d)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ans++;
                dfs(i);
            }
        }

        tc++;

        cout <<"Case " << tc << ": " << ans << endl;
    }

    return 0;
}
