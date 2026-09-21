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

    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n;
        int minnum = 1e9 ;
        for(int i = 0 ; i < 3 ; i++){
            int num;
            cin >> num;
            minnum = min(minnum,num);
        }

        cout << n - minnum << '\n';
    }

    return 0;
}
