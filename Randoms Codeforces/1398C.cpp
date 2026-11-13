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
    int len;
    string s;
    cin >> len >> s;
    vector<int> v , pre;
    for(char c : s){
        v.push_back(c - '0');
    }
    pre.assign(len+1,0);
    for(int i = 1 ; i <= len ; i++){
        pre[i] = pre[i-1] + v[i-1];
    }
    unordered_map<int,int> mp;
    int ans = 0;
    for(int i = 1 ; i <= len ; i++){
        mp[i - pre[i-1]]++;
        ans += mp[i - pre[i] + 1];
    }

    cout << ans << '\n';
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