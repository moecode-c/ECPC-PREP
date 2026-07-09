#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n, L, K;
ll maxradius = 0;
vector<ll> x, y;
unordered_map<ll,ll> dp;

ll dis(ll x1, ll y1)
{
    return ceill(sqrt((x1 * x1) + (y1 * y1)));
}

ll findr(ll curRad)
{
    if (curRad >= maxradius)
        return 0;

    if (dp.count(curRad))
        return dp[curRad];

    ll op1 = findr(curRad * 2) + 1;
    ll op2 = findr(curRad + K) + 1;

    return dp[curRad] = min(op1, op2);
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> L >> K;

        x.assign(n, 0);
        y.assign(n, 0);
        dp.clear();
        maxradius = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
            maxradius = max(maxradius, dis(x[i], y[i]));
        }

        cout << findr(L) << endl;
    }

    return 0;
}
