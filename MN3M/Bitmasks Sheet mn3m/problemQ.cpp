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
        int p;
        cin >> p;
        int bit = 0;
        int sum = 1;

        while((1 << bit) <= p){
        bit++;
        if((1 << bit) <= p)
        sum*=2;
        }
        
        cout << sum - 1 << endl;
    }

    return 0;
}
