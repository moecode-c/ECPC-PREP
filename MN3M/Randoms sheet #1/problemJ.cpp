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

    string a, b;
    cin >> a >> b;

    string result;
    for (int i = 0; i < a.size(); i++) {
        result += (a[i] != b[i]) ? '1' : '0';
    }

    cout << result << "\n";

    return 0;
}
