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
int x;
vector<vector<int>> dp;

int recdp(int curatt , int curx) {
    if(curx < 0 || curatt >= curx){
        return 1;
    }

    int &ret = dp[curatt][curx];
    if(~ret)
    return ret;

    int ch1 = 1e18;
    if(curatt < 200)
    ch1 = recdp(curatt + 1, curx) + 1;
    int ch2 = 1e18;
    if(curatt > 0)
    ch2 = recdp(curatt - 1, curx - curatt) + 1;

    return ret = min(ch1,ch2);
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    dp.assign(201, vector<int>(10001, -1));
    while (t--) {
     
        cin >> x;

        cout << recdp(1,x) <<"\n";
    }

    return 0;
}