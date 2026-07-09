#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int t;
    cin >> t;
    int v , tc ,r;
    while (t--) {
        cin >> v >> tc >> r;
        cout << r / (v*tc) << endl;
    }

    return 0;
}
