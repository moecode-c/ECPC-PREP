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
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        int da = min(n, a - x);
        int db = min(n - da, b - y);
        int r1 = (a - da) * (b - db);

        int db2 = min(n, b - y);
        int da2 = min(n - db2, a - x);
        int r2 = (a - da2) * (b - db2);

        cout << min(r1, r2) << "\n";
    }
}