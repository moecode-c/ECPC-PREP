#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n;

bool can(ll mid) {
    ll cnt = 0;

    for (ll i = 1; i <= n; i++) {
        cnt += min(n, mid / i);
    }

    return cnt >= (n * n + 1) / 2;
}

void solve() {
    cin >> n;

    ll l = 1, r = n * n;
    ll ans = 0;

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (can(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    fast_io();

    solve();

    return 0;
}