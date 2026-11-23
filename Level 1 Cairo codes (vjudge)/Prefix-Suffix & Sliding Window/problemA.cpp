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

    int n , q;
    cin >> n;
    vector<int> v(n + 1) , pre(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
    }

    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        l++;
        r++;
        cout << pre[r] - pre[l-1] << "\n";
    }

    return 0;
}
