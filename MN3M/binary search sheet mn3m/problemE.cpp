#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n;
vector<pair<ll, ll>> a;

bool can(double temp) {
    double left = -1e18;
    double right = 1e18;

    for (int i = 0; i < n; i++) {
        double x = a[i].first;
        double v = a[i].second;

        left = max(left, x - v * temp);
        right = min(right, x + v * temp);
    }

    return left <= right;
}

void solve() {
    cin >> n;

    a.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].first;

    for (int i = 0; i < n; i++)
        cin >> a[i].second;

    double l = 0, r = 1e9;

    for (int i = 0; i < 100; i++) {
        double temp = (l + r) / 2;

        if (can(temp))
            r = temp;
        else
            l = temp;
    }

    cout << fixed << setprecision(12) << r << endl;
}

int main() {
    fast_io();

    solve();

    return 0;
}