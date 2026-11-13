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

int x;

void solve()
{
    int best = 1;

    for (int d = 1; d * d <= x; d++)
    {
        if (x % d == 0 && __gcd(d, x / d) == 1)
            best = d;
    }

    cout << best << " " << x / best;
}

int32_t main()
{
    fast_io();

    cin >> x;
    solve();

    return 0;
}