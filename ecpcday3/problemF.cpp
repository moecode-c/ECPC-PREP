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

int n, q;
vector<int> mys , vis , sub;
vector<vector<int>> adj;

void dfs(int node) {
    vis[node] = true;
    bool isleaf = true;

    for(int i : adj[node]){
        if(!vis[i]){
            dfs(i);
            sub[node] = min(sub[i],abs(mys[node] - mys[i]));
        }
    }
}

int32_t main() {
    fast_io();

    cin >> n;
    mys.assign(n+1 , 0);
    adj.assign(n+1,{});
    for(int i = 1 ; i <= n ; i++){
        cin >> mys[i];
    }

    for(int i = 1 ; i <= n - 1 ; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cin >> q;
    while(q--){

    }
    

    return 0;
}
