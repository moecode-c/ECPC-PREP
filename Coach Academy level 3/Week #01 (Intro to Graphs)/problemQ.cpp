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
vector<vector<pair<int, char>>> adj;
vector<int> vis;
int mincount = 1e18;

void dfs(int node, int count){
    vis[node] = true;
    bool isleaf = true;

    for(auto i : adj[node]){
        if(!vis[i.first]){
            if(s[node - 1] == i.second)
            dfs(i.first , count);
            else
            dfs(i.first , count + 1);

            isleaf = false;
        }
    }

    if(isleaf)
    mincount = min(mincount,count);
}

void solve()
{
    adj.assign(n + 1, {});
    vis.assign(n+1,0);
    mincount = 1e18;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a != 0)
        {
            adj[i].push_back({a, 'L'});
        }
        if (b != 0)
        {
            adj[i].push_back({b, 'R'});
        }
    }

    dfs(1 , 0);

    cout << mincount << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        solve();
    }

    return 0;
}
