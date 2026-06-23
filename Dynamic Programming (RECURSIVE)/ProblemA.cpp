#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll N, W;
vector<ll> weights, values;
vector<vector<ll>> dp;

ll knapsack(ll i, ll curw)
{
    if (curw > W)
        return -2e18;

    if (i == N)
        return 0;
    
    if(dp[i][curw] != -1)
       return dp[i][curw];

    ll ch1 = knapsack(i + 1, curw);
    ll ch2 = knapsack(i + 1, curw + weights[i]) + values[i];

    return dp[i][curw] = max(ch1,ch2);
}

int main()
{
    fast_io();
    cin >> N >> W;

    values.resize(N);
    weights.resize(N);
    dp.assign(N, vector<ll>(W + 1, -1));
    
    for(int i = 0 ; i < N ; i++){
        cin >> weights[i] >> values[i];
    }

    cout << knapsack(0,0);

    return 0;
}
