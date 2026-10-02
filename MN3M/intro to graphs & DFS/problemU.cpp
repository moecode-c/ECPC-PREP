#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n,t;
vector<vector<int>> adj;
vector<bool> vis;

void dfs(int node) {
    vis[node] = true;

    for(int u : adj[node]){
        if(!vis[u])
        dfs(u);
    }
}

int32_t main() {
    fast_io();

    cin >> n >> t;
    vis.assign(n+1,false);
    adj.resize(n+1);
    for(int i = 1 ; i <= n-1 ; i++){
        int num;
        cin >> num;
        adj[i].push_back(i+num);
    }

    dfs(1);

    if(!vis[t])
    cout << "NO";
    else
    cout << "YES";

    return 0;
}
