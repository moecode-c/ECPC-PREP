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
    vector<int> v(n);
    
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    unordered_map<int,int> mp;

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += mp[v[i] - i];
        mp[v[i] - i]++;
    }

    cout << sum << '\n';
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
