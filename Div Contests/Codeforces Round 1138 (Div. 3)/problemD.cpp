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
int n;
vector<vector<pair<int, bool>>> dp;
vector<int> shopsleft, shopsright;

int solve(int ind, int swit)
{
    if (ind == n)
    {
        return 0;
    }
    if (dp[ind][swit].second)
        return dp[ind][swit].first;

    int res;
    if (swit == 0)
    {
        res = max(shopsleft[ind] - shopsright[ind] + solve(ind + 1, 0),
                  solve(ind + 1, 1));
    }
    else
    {
        res = min(shopsright[ind] - shopsleft[ind] + solve(ind + 1, 1),
                  solve(ind + 1, 0));
    }

    dp[ind][swit] = {res, true};
    return res;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dp.assign(n + 1, vector<pair<int, bool>>(2, {0, false}));
        shopsleft.assign(n + 1, 0);
        shopsright.assign(n + 1, 0);

        for (int i = 0; i < n; i++)
            cin >> shopsleft[i];

        for (int i = 0; i < n; i++)
            cin >> shopsright[i];

        int d = solve(0, 0);
        if (d > 0)
            cout << "Sunny\n";
        else if (d < 0)
            cout << "Aubrey\n";
        else
            cout << "Draw\n";
    }

    return 0;
}