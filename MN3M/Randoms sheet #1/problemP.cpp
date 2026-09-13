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

    string s;
    cin >> s;

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l == r) {
            cout << "Yes\n";
            continue;
        }

        if (s[l] != s[r]) {
            cout << "Yes\n";
            continue;
        }

        bool seen[26] = {};
        int distinct = 0;

        for (int i = l; i <= r; i++) {
            if (!seen[s[i] - 'a']) {
                seen[s[i] - 'a'] = true;
                distinct++;
            }
        }

        if (distinct >= 3)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}