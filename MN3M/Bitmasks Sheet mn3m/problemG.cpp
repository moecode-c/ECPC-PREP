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

    int n;
    cin >> n;

    int count = 0;
    for(int mask = 0 ; mask <= n ; mask++)
    for(int i = 50 ; i >= 0 ; i--){
        if((mask >> i) & 1) count++;
    }

    cout << count;
    return 0;
}
