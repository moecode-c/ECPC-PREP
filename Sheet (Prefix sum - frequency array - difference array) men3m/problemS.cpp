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

    vector<int> v(n + 1);
    vector<int> diff(n + 2, 0);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= q; i++) {
        int l, r;
        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
        diff[i] += diff[i - 1];

    sort(v.begin() + 1, v.end());
    sort(diff.begin() + 1, diff.end() - 1);

    int ans = 0;

    for (int i = 1; i <= n; i++)
        ans += v[i] * diff[i];

    cout << ans << '\n';

    return 0;
}