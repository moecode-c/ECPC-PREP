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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int gcdnum1 = v[0], gcdnum2 = v[1];
    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
            gcdnum1 = __gcd(gcdnum1, v[i]);

        if (i % 2 == 1)
            gcdnum2 = __gcd(gcdnum2, v[i]);
    }
    bool can1 = true, can2 = true;
    // cout << "dubegggin " << gcdnum1 << "    " << gcdnum2 << '\n';
    if (gcdnum1 == gcdnum2)
    {
        cout << 0 << '\n';
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % gcdnum1 == 0 and i % 2 == 1)
            {
                can1 = false;
            }

            if (v[i] % gcdnum2 == 0 and i % 2 == 0)
            {
                can2 = false;
            }
        }
    }

    if (can1)
        cout << gcdnum1 << '\n';
    else if (can2)
        cout << gcdnum2 << '\n';
    else
        cout << 0 << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}