#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n, m, c;
vector<ll> cows;

bool can(ll mid) {
    ll buses = 0;
    ll i = 0;

    while (i < n) {
        ll first = cows[i];
        ll cap = 0;

        while (i < n && cap < c && cows[i] <= first + mid) {
            i++;
            cap++;
        }

        buses++;

        if (buses > m)
            return false;
    }

    return true;
}

int main() {
    fast_io();

    freopen("convention.in", "r", stdin);
    freopen("convention.out", "w", stdout);

    cin >> n >> m >> c;

    cows.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> cows[i];

    sort(all(cows));

    ll l = 0, r = 1e9;
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

    return 0;
}