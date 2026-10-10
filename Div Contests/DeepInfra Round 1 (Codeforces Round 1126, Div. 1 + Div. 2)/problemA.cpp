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

vector<vector<int>> dp;
int dx , dy;

bool valid(int xd ,int yd){
    return xd <= dx and yd <= dy + 1 and xd >= 0 and yd >= 0;
}

int rec(int x, int y) {
    if(x == dx and y == dy){
        return 0;
    }
    if(x == dx and abs(y - dy) == 1){
        return 1;
    }

    int &ret = dp[x][y];
    if(~ret)
        return ret;

    int ch1 = 1e17, ch2 = 1e17;
    if(valid(x+1,y+1))
        ch1 = rec(x+1,y+1) + 1;

    if(valid(x+1,y-1))
        ch2 = rec(x+1,y-1) + 1;

    return ret = min({ch1,ch2});
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        cin >> dx >> dy;
        dp.assign(dx+1,vector<int> (dy+2,-1));
        int ans = rec(0,0);
        cout << (ans >= 1e17 ? -1 : ans) << '\n';
    }

    return 0;
}