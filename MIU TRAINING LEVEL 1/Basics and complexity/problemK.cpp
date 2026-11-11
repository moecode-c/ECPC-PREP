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
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 1 || s[0] == ')' || s[n - 1] == '(')
        cout << "NO\n";
    else
        cout << "YES\n";
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