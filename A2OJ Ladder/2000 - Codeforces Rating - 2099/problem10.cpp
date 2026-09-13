#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> p(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> p[i];

    vector<ll> dp(n + 1);

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = (2 * dp[i - 1] - dp[p[i] - 1] + 2) % MOD;

        if (dp[i] < 0)
            dp[i] += MOD;
    }

    cout << dp[n];
}