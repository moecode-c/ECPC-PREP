#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 2e5 + 5;

int n;
vector<ll> v;
ll dp[N][2];

ll exep(int ind, int count)
{
    if (ind == n)
        return 0;

    if (dp[ind][count] != -1)
        return dp[ind][count];

    return dp[ind][count] = max(
        exep(ind + 1, count),
        exep(ind + 1, (count + 1) % 2) +
        (1 + !((count + 1) % 2)) * v[ind]
    );
}

int main()
{
    fast_io();

    cin >> n;
    v.resize(n);

    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << exep(0, 0);

    return 0;
}