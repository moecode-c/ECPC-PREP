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

    int n, q;
    cin >> n >> q;

    vector<int> diff(n + 2, 0);

    for (int i = 1; i <= q; i++) {
        int l, r, k;
        cin >> l >> r >> k;

        diff[l] += k;
        diff[r + 1] -= k;
    }

    int current = 0;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        current += diff[i];
        ans = max(ans, current);
    }

    cout << ans << '\n';

    return 0;
}