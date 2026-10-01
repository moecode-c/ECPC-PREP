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
        int n , k;
        cin >> n >> k;
        int sum = 1;
        sum = (1 << (n-k + 1));
        cout << sum+(k*2)-2 << '\n';
    }

    return 0;
}
