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
        string s;
        cin >> n >> s;

        int onesCount = count(all(s), '1');
        int zerosCount = n - onesCount;

        if (s[0] == '1') {
            cout << zerosCount << '\n';
            continue;
        }

        int minOps = onesCount;
        int onesPrefix = 0;

        for (int cut = 1; cut < n; cut++) {
            onesPrefix += (s[cut - 1] == '1');

            if (s[cut] == '1' || onesPrefix > 0) {
                int cost = 2 * onesPrefix - cut + zerosCount;
                minOps = min(minOps, cost);
            }
        }

        cout << minOps << '\n';
    }

    return 0;
}