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

        string s;
        cin >> s;

        map<int, int> freq;

        int sum = 0;
        int ans = 0;

        freq[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += (s[i] - '0') - 1;

            ans += freq[sum];

            freq[sum]++;
        }

        cout << ans << '\n';
    }

    return 0;
}