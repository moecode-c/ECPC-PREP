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
vector<bool> seen;

void dfs(int node , vector<int>& comp){
    seen[node] = true;
    comp.push_back(node);

    for(int i : adj[node]){
        if(!seen[i]){
            dfs(i,comp);
        }
    }
}


int32_t main() {
    fast_io();

    
    cin >> n >> m;
    vector<int> allnums;
    seen.assign(n+1,false);
    adj.assign(n+1, {});
    
    for(int i = 0 ; i < m ; i++){
        int num;
        cin >> num;
        for(int j = 1 ; j <= num ; j++){
            int nam;
            cin >> nam;
            allnums.push_back(nam);
        }

        for(int k = 1 ; k < num; k++){
            adj[allnums[k]].push_back(allnums[k-1]);
            adj[allnums[k-1]].push_back(allnums[k]);
        }

        allnums.clear();
    }



    for(int i = 1 ; i <= n ; i++){
        if(!seen[i]){
            vector<int> comp;
            dfs(i,comp);
            comps.push_back(comp);
        }
    }

    vector<int> ammountusers(n+1,1);
    for(int i = 0 ; i < comps.size() ; i++){
        for(int j = 0 ; j < comps[i].size() ; j++){
            ammountusers[comps[i][j]] = comps[i].size();
        }
    }

    for(int i = 1 ; i <= n ; i++){
        cout << ammountusers[i] << " ";
    }
    cout << '\n';
    return 0;
}