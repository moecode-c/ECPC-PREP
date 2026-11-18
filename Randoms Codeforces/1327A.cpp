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

int32_t main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n >= k * k && (n % 2) == (k % 2)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}