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

vector<int> a, b;
vector<pair<int, int>> dp;
int n;

pair<int, int> solve(int i) {
    if (i == n)
        return {0, 0};

    if (dp[i].first != LLONG_MIN)
        return dp[i];

    auto [mx, mn] = solve(i + 1);

    int redMax = mx - a[i];
    int redMin = mn - a[i];

    int blueMax = b[i] - mn;
    int blueMin = b[i] - mx;

    return dp[i] = {
        max(redMax, blueMax),
        min(redMin, blueMin)
    };
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        a.resize(n);
        b.resize(n);
        dp.assign(n, {LLONG_MIN, LLONG_MIN});

        for (int &x : a)
            cin >> x;

        for (int &x : b)
            cin >> x;

        cout << solve(0).first << '\n';
    }
}