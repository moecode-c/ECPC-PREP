#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll N, K;
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

    

    ll mine = 2e18;

    for (int Icur = 1; Icur <= K; Icur++)
    {
        ll ch = 2e18;
        if (Icur + i<= N)
        {
            ch = frog(Icur + i) + abs(values[i] - values[i + Icur]);
            mine = min(mine, ch);
        }
    }
    return dp[i] = mine;
}

int main()
{
    fast_io();

    cin >> N >> K;
    values.resize(N + 1);
    dp.assign(N + 1, -1);
    for (int i = 1; i <= N; i++)
    {
        cin >> values[i];
    }

    cout << frog(1);

    return 0;
}
