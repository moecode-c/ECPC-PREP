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
    unordered_map<int, int> cnt;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }
    for (int g = mx; g >= 1; g--) {
        int c = 0;
        for (int m = g; m <= mx; m += g) {
            if (cnt.count(m)) c += cnt[m];
        }
        if (c >= 2) {
            cout << g << "\n";
            return;
        }
    }
}

int32_t main() {
    fast_io();
    solve();
    return 0;
}