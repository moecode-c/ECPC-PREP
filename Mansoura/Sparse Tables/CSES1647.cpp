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
int n , q;
vector<vector<int>> sp;
vector<int> lg , v;

void solve() {
    lg[1] = 0;
    for(int i = 2 ; i <= n ; i++) lg[i] = lg[i/2] + 1;

    for(int i = 0 ; i < n ; i++) 
    sp[0][i] = v[i];

    for(int k = 1 ; (1 << k) <= n ; k++){
        for(int i = 0 ; i + (1 << k) <= n ; i++){
            sp[k][i] = min(sp[k-1][i] , sp[k-1][i + (1 << (k-1))]);
        }
    }
}

int32_t main() {
    fast_io();

    
    cin >> n >> q;
    v.assign(n,0);
    lg.assign(n+1 , 0);
    sp.assign(18,vector<int>(n,0));
    for (int i = 0; i < n; i++) cin >> v[i];
    solve();
    while (q--) {
        int l , r;
        cin >> l >> r;
        int k = lg[r - l + 1];
        cout << min(sp[k][l - 1] , sp[k][r - (1 << k)]) << '\n';
    }

    return 0;
}
