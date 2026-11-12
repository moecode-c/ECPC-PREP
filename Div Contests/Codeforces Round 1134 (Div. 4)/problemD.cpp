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
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    int sum = 0;
    vector<bool> seen(26, false);

    while (l < r) {
        if (s[l] != s[r]) {
            if (s[l] > s[r]) {
                for (char c = s[r] + 1; c <= s[l]; c++) {
                    if (!seen[c - 'a']) {
                        seen[c - 'a'] = true;
                        sum++;
                    }
                }
            }
            else {
                for (char c = s[l] + 1; c <= s[r]; c++) {
                    if (!seen[c - 'a']) {
                        seen[c - 'a'] = true;
                        sum++;
                    }
                }
            }
        }

        l++;
        r--;
    }

    cout << sum << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}