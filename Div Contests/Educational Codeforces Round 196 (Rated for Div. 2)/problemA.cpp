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
    int l , r;
    cin >> l >> r;

    if(l == 0 and r == 0)
    cout << 0 << '\n';
    else if(l == 0 or r == 0)
    cout << r - l - 1 << '\n';
    else if(l >= 0 and r >= 0 or l <= 0 and r <= 0)
    cout << r - l << '\n';
    else if(r == abs(l)){
        cout << 0 << '\n';
    }
    else{
    cout << abs(r + l) - 1 << '\n';
    }
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