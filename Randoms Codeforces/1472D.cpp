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

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && v[i] % 2 == 0) {
            alice += v[i];
        }
        else if (i % 2 == 1 && v[i] % 2 == 1) {
            bob += v[i];
        }
    }

    if (alice > bob) cout << "Alice\n";
    else if (bob > alice) cout << "Bob\n";
    else cout << "Tie\n";
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