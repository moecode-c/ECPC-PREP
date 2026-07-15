#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n+1 , 0);
    vector<ll> prefixsum(n+1 , 0);
    vector<ll> sumindexes(n+1 , 0);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];

    //sum indexes
    for(int i = 1 ; i <= n ; i++){
        sumindexes[i] += sumindexes[i - 1] + i;
    }
    //sum elements
    for(int i = 1 ; i <= n ; i++){
        prefixsum[i] += prefixsum[i - 1] + v[i];
        if(prefixsum[i] < sumindexes[i]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
