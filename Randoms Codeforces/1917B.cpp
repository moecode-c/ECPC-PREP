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
string s;
int n;

void solve() {
    vector<int> dis(26, 0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int c = s[i] - 'a';
        if (!dis[c]) {
            dis[c] = 1;
            ans += n - i;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        solve();
    }

    return 0;
}