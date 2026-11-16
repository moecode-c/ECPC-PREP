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
    map<int,int> mp;
    vector<bool> seen(n + 1, false);
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        mp[num]++;
    }

    vector<int> v;
    for(auto p : mp) v.push_back(p.second);

    sort(v.rbegin(), v.rend());

    int sum = 0;
    int prev = 0;

    for(int c : v){
        if(seen[c]) c = prev - 1;
        if(c <= 0) break;
        seen[c] = true;
        sum += c;
        prev = c;
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
