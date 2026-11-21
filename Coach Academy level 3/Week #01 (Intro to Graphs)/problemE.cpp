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
int n , m;
vector<vector<int>> adj , comps;
vector<int> vis;
int maxnum = 0;

void dfs(int node , vector<int> &comp){
    vis[node] = true;
    comp.push_back(node);
    
    for(int i : adj[node]){
        if(vis[i] == 0){
        dfs(i , comp);
        }
    }
}

int32_t main() {
    fast_io();

    cin >> n >> m;
    adj.assign(n+1,{});
    vis.assign(n+1,0);

    for(int i = 1 ; i <= m;i++){
        int a , b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

  
    for(int i = 1 ; i <= n;i++){
        if(!vis[i]){
            vector<int> comp;
            dfs(i,comp);
            comps.push_back(comp);
        }
    }

    cout << comps.size() - 1 << '\n';
    for(int i = 0 ; i < comps.size() - 1; i++){
        cout << comps[i][0] << " " << comps[i + 1][0] << '\n';
    }

    return 0;
}