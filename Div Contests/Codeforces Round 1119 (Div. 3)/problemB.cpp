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

        int odd = 0;
        int mod40 = 0;
        int mod42 = 0;

        for (int i = 0; i < n; i++) {

            int x;
            cin >> x;

            if (x % 2 != 0)
                odd++;
            else if (x % 4 == 0)
                mod40++;
            else
                mod42++;
        }

        cout << max({odd, mod40, mod42}) << '\n';
    }

    return 0;
}