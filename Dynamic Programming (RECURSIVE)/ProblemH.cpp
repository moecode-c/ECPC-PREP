#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

unordered_map<ll, ll> dp;

ll coinfc(ll coin)
{
    if (coin >= ((ll)coin / 2 + (ll)coin / 3 + (ll)coin / 4))
        return coin;

    if (dp.count(coin))
        return dp[coin];

    ll ch1 = coinfc((ll)coin / 2) + coinfc((ll)coin / 3) + coinfc((ll)coin / 4);
    return dp[coin] = ch1;
}

int main()
{
    fast_io();

    int n;
    while (cin >> n)
    {
        cout << coinfc(n) << endl;
    }

    return 0;
}
