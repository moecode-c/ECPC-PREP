#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int n, q;
    cin >> n >> q;

    // Extra row and column of zeros
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            pref[i][j] = (c == '*');
        }
    }

    // Row prefix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] += pref[i][j - 1];
        }
    }

    // Column prefix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] += pref[i - 1][j];
        }
    }

    while (q--) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        int ans =
            pref[y2][x2]
            - pref[y1 - 1][x2]
            - pref[y2][x1 - 1]
            + pref[y1 - 1][x1 - 1];

        cout << ans << '\n';
    }

    return 0;
}