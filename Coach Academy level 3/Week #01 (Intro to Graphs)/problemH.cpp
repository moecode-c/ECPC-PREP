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
vector<vector<int>> adj;
vector<int> vis , order;
bool can = true;

void dfs(int node){
    if(!can) return;

    vis[node] = 1;
    
    for(int i : adj[node]){
        if(vis[i] == 0){
        dfs(i);
        }
        else if(vis[i] == 1){
            can = false;
            return;
        }
    }

    vis[node] = 2;
    order.push_back(node);
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
    }

    for(int i = 1 ; i <= n ; i++){
        if(!vis[i])
        dfs(i);

        if(!can){
            cout << "IMPOSSIBLE";
            return 0;
        }
    }

    reverse(all(order));
    for(auto i : order){
        cout << i << " ";
    }

    return 0;
}