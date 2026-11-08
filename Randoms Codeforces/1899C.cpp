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
int n;
vector<int> v;
vector<vector<int>> dp;

int go(int idx , int parity) {
    if(idx == n){
        if(parity == 2) return -1e18;
        return 0;
    }

    if(~dp[idx][parity])
    return dp[idx][parity];

    int ch1 = -1e18;
    if(parity == 2)
    ch1 = go(idx+1 , parity);

    int ch2 = -1e18;
    if(parity == 2 or (abs(v[idx]) % 2 != parity))
    ch2 = go(idx + 1 , (abs(v[idx])) % 2) + v[idx];

    int ch3 = -1e18;
    if(parity != 2)
    ch3 = 0;

    return dp[idx][parity] = max({ch1,ch2,ch3});

}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        v.assign(n,0);
        dp.assign(n+1,vector<int> (3,-1));
        for(int i = 0 ; i < n ; i++)
        cin >> v[i];

        cout << go(0 , 2) << '\n';
    }

    return 0;
}