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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> MAX1(n);
        vector<int> MAX2(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        MAX1[0] = a[0];

        for (int i = 1; i < n; i++)
            MAX1[i] = max(MAX1[i - 1], a[i] + i);

        MAX2[n - 1] = a[n - 1] - (n - 1);

        for (int i = n - 2; i >= 0; i--)
            MAX2[i] = max(MAX2[i + 1], a[i] - i);

        int ans = 0;

        for (int j = 1; j < n - 1; j++)
            ans = max(ans, MAX1[j - 1] + a[j] + MAX2[j + 1]);

        cout << ans << '\n';
    }

    return 0;
}