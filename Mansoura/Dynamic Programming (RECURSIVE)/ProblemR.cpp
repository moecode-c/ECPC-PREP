#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 100005; // maximum value for numbers
int n;
int mx = 0;
ll dp[N];
vector<ll> frq(N);

// 1 -> 1e5
ll go(int num){
    if(num > mx)
        return 0;

    if(dp[num] != -1)
        return dp[num];

    ll op1 = go(num + 1);
    ll op2 = go(num + 2) + frq[num] * (ll)num;

    return dp[num] = max(op1, op2);
}

void solve()
{
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        frq[x]++;
        mx = max(mx, x);
    }
    memset(dp, -1, sizeof dp);
    cout << go(1);
}

signed main()
{
    fast_io();
    int T = 1; // cin >> T;
    while( T-- )
    {
        solve();
        if( T > 0 )
            cout << '\n';
    }
    return 0;
}
