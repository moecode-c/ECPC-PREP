#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int n;
    ll t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0;
    int maxnumbooks = 0;
    ll sum = 0;

    for (int r = 0; r < n; r++) {
        sum += v[r];

        while (sum > t) {
            sum -= v[l];
            l++;
        }

        maxnumbooks = max(maxnumbooks, r - l + 1);
    }

    cout << maxnumbooks;

    return 0;
}
