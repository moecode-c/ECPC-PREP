#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int MOD = 1e9 + 7;
int n;
vector<int> dp;

int diceroll(int sum)
{
    if (sum == n)
        return 1;

    if (sum > n)
        return 0;

    int &ret = dp[sum];
    if (~ret)
        return ret;

    int res = 0;
    for (int d = 1; d <= 6; d++)
        res += diceroll(sum + d);
    res %= MOD;
    
    return ret = res;
}

int32_t main()
{
    fast_io();

    cin >> n;
    dp.assign(n + 1, -1);
    cout << diceroll(0);

    return 0;
}