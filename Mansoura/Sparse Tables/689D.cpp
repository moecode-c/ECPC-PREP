#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n;
vector<int> lg, a, b;
vector<vector<int>> spa, spb;

void solve() {
    lg[1] = 0;
    for (int i = 2; i <= n; i++) lg[i] = lg[i / 2] + 1;

    for (int i = 0; i < n; i++) {
        spa[0][i] = a[i];
        spb[0][i] = b[i];
    }

    for (int k = 1; (1 << k) <= n; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            spa[k][i] = max(spa[k - 1][i], spa[k - 1][i + (1 << (k - 1))]);
            spb[k][i] = min(spb[k - 1][i], spb[k - 1][i + (1 << (k - 1))]);
        }
    }
}

int qmax(int l, int r) {
    int k = lg[r - l + 1];
    return max(spa[k][l - 1], spa[k][r - (1 << k)]);
}

int qmin(int l, int r) {
    int k = lg[r - l + 1];
    return min(spb[k][l - 1], spb[k][r - (1 << k)]);
}

int32_t main() {
    fast_io();

    cin >> n;
    a.assign(n, 0);
    b.assign(n, 0);
    lg.assign(n + 1, 0);
    spa.assign(18, vector<int>(n, 0));
    spb.assign(18, vector<int>(n, 0));

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    solve();

    int total = 0;
    for (int l = 1; l <= n; l++) {
        int low = l, high = n, ans = n + 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (qmax(l, mid) >= qmin(l, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        int p1 = ans;

        low = l, high = n, ans = n + 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (qmax(l, mid) > qmin(l, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        int p2 = ans;

        total += p2 - p1;
    }

    cout << total << '\n';
    return 0;
}