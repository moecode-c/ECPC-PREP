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
int n;
vector<vector<int>> adj;
vector<int> sub;

void dfs(int v){
    for(int c : adj[v]){
        dfs(c);
        sub[v] += sub[c] + 1;
    }
}

int32_t main() {
    fast_io();

    cin >> n;
    adj.assign(n+1,{});
    sub.assign(n+1,0);

    for(int i = 2 ; i <= n ;i++){
        int num;
        cin >> num;
        adj[num].push_back(i);
    }

    dfs(1);

    for(int i = 1 ; i <= n ; i++){
        cout << sub[i] << " ";
    }

    return 0;
}