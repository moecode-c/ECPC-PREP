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

    vector<int> ans(n , 0);
    for (int i = 0; i < n; i++)
        cin >> ans[i];

    if (n == 1) {
        cout << 0 << '\n';
        return;
    }

    int maxnum = -1e18;
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < n; j++) {
            if (ans[j] % ans[i] == 0){
                x++;
            }
        }
        maxnum = max(maxnum, x);
    }

    cout << n - maxnum << '\n';
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