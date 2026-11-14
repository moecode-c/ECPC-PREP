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
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < k; i++) {
        if (a[i] < b[i]) {
            a[i] = b[i];
        }
        else {
            break;
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << "\n";
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