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

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;

    vector<long long> mp(n, 0);

    mp[0] = 1;

    long long prefix = 0;

    for (int i = 0; i < n; i++) {

        prefix += a[i];

        long long rem = prefix % n;

        if (rem < 0) {
            rem += n;
        }

        ans += mp[rem];

        mp[rem]++;
    }

    cout << ans << '\n';

    return 0;
}