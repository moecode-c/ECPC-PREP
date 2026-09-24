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
    // Write solution here
}

int32_t main() {
    fast_io();

    int n , s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    int l = 0, r = 0, sum = 0 , len = 0;
    while (r < n) {
        sum += v[r];

        while (sum > s) {
            sum -= v[l];
            l++;
        }

        int ele = r - l + 1;
        len += ele * (ele + 1) / 2;
        r++;
    }

    cout << len;
    return 0;
}
