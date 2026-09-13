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
    int x,y;
    while (t--) {
        cin >> x >> y;
        if(x % 2 == 1 && y % 2 == 1)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }

    return 0;
}
