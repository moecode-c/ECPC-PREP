#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll solve(const vector<ll>& v)
{
    ll g = 0;
    for (ll value : v)
        g = gcd(g, value);

    for (ll p = 2;; p++)
    {
        bool prime = true;
        for (ll d = 2; d * d <= p; d++)
        {
            if (p % d == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime && g % p != 0)
            return p;
    }
}

int main()
{
    fast_io();
    

    int t = 1;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << solve(v) << '\n';
    }

    return 0;
}
