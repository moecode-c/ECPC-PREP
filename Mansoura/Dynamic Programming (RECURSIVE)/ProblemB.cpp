#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll N;
vector<ll> values;
vector<ll> dp;

ll frog(ll i)
{
    if (i > N)
        return 2e18;

    if (i == N)
        return 0;

    if (dp[i] != -1)
    {
        return dp[i];
    }

    ll ch1 = frog(i + 1) + abs(values[i] - values[i + 1]);
    ll ch2 = 2e18;

    if (i + 2 <= N)
    {
        ch2 = frog(i + 2) + abs(values[i] - values[i + 2]);
    }
    return dp[i] = min(ch1, ch2);
}

int main()
{
    fast_io();

    cin >> N;
    values.resize(N + 1);
    dp.assign(N + 1, -1);
    for (int i = 1; i <= N; i++)
    {
        cin >> values[i];
    }

    cout << frog(1);

    return 0;
}
