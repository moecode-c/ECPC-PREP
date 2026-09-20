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

int32_t main(){
    fast_io();

    int t;
    cin >> t;
    while(t--){
        long long x, y, z;
        cin >> x >> y >> z;

        long long a = x | z;
        long long b = x | y;
        long long c = y | z;

        bool ok = (a & b) == x && (b & c) == y && (a & c) == z;

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}