#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}




int main() {
    fast_io();

    vector<vector<int>> adj;
    int n , m;
    cin >> n >> m;
    adj.resize(n+1);
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count1=0;
    int count2 = 0;
    int countn = 0;
    for(int i = 1 ; i <= n ; i++){
        if(adj[i].size() == 1)
        count1++;
        else if(adj[i].size() == 2)
        count2++;
        else{
            countn++;
        }
    }
    if(count2 == n){
        cout << "ring topology";
    }
    else if(count2 == n-2 && count1 == 2){
        cout<<"bus topology";
    }
    else if(countn == 1 && count1 == n-1){
        cout << "star topology";
    }
    else{
        cout << "unknown topology";
    }

    return 0;
}
