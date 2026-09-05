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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];

        sort(all(v));
        bool can =false;
        for(int i = 0 ; i < n ; i++){
            if(v[i] % 67 == 0)
            can = true;
        }
        cout << (can? "YES" : "NO") << '\n';
    }

    return 0;
}
