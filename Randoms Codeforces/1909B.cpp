
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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = 2;

    while (true) {
        set<int> s;

        for (int i = 0; i < n; i++) {
            s.insert(a[i] % k);
        }

        if (s.size() == 2) {
            cout << k << '\n';
            return;
        }

        k *= 2;
    }
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
