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

    vector<int> freq(2019, 0);

    int rem = 0;
    int power = 1;
    int ans = 0;

    freq[0] = 1;

    for (int i = s.size() - 1; i >= 0; i--) {
        int digit = s[i] - '0';

        rem = (rem + digit * power) % 2019;

        ans += freq[rem];

        freq[rem]++;

        power = (power * 10) % 2019;
    }

    cout << ans << '\n';

    return 0;
}