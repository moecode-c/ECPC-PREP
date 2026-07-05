#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // Flip negative numbers while we still have operations.
    for (int i = 0; i < n && k > 0; i++) {
        if (v[i] < 0) {
            v[i] *= -1;
            k--;
        }
    }

    // If one flip remains (odd number of remaining operations),
    // flip the smallest element.
    if (k % 2 == 1) {
        int idx = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[idx])
                idx = i;
        }
        v[idx] *= -1;
    }

    ll sum = 0;
    for (int x : v)
        sum += x;

    cout << sum;

    return 0;
}