#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    const int INF = 1e9;
    vector<int> dp(7, INF), ndp(7, INF);

    for (int v = 1; v <= 6; v++) {
        dp[v] = (a[0] == v ? 0 : 1);
    }

    for (int i = 1; i < n; i++) {
        fill(ndp.begin(), ndp.end(), INF);
        for (int cur = 1; cur <= 6; cur++) {
            int cost = (a[i] == cur ? 0 : 1);
            for (int prev = 1; prev <= 6; prev++) {
                if (prev == cur) continue;
                if (prev + cur == 7) continue;
                ndp[cur] = min(ndp[cur], dp[prev] + cost);
            }
        }
        dp.swap(ndp);
    }

    int ans = INF;
    for (int v = 1; v <= 6; v++) ans = min(ans, dp[v]);
    cout << ans << '\n';
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
