#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    ll n;
    cin >> n;

    if ((n & (n - 1)) == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    fast_io();

    int t = 1;
     cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
