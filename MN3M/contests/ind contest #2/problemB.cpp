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

void solve() {
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    vector<int> v(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    for(auto i : mp){
        if(i.second >= 3)
        {
            cout << i.first << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
