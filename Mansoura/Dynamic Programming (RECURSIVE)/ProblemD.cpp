#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
string s, t;
vector<vector<ll>> dp;

ll lcs(ll i, ll j)
{
    if (i >= s.length() || j >= t.length())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s[i] == t[j])
    {
        return dp[i][j] = 1 + lcs(i + 1, j + 1);
    }

    ll ch1 = lcs(i + 1, j);
    ll ch2 = lcs(i, j + 1);

    return dp[i][j] = max(ch1, ch2);
}

int main()
{
    fast_io();

    cin >> s >> t;
    ll sizes = (ll)s.length();
    ll sizet = (ll)t.length();
    dp.assign(sizes + 1, vector<ll>(sizet + 1, -1));

    lcs(0, 0);

    ll i = 0, j = 0;
    string ans = "";

    while (i < sizes && j < sizet)
    {
        if (s[i] == t[j])
        {
            ans += s[i];
            i++;
            j++;
        }
        else if (dp[i + 1][j] >= dp[i][j + 1])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << ans;
    return 0;
}
