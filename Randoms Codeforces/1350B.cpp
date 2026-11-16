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
vector<int> v , dp;

int solve(int ind)
{
    if(ind == n)
    return 1;

    if(dp[ind] != -1)
    return dp[ind];

    int res = 1;
    for(int j = 2 * ind; j <= n; j += ind)
    {
        if(v[j] > v[ind])
            res = max(res, 1 + solve(j));
    }

    return dp[ind] = res;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        v.assign(n + 1, 0);
        dp.assign(n + 1, -1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans = max(ans, solve(i));

        cout << ans << "\n";
    }

    return 0;
}