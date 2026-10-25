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
int n, x, y;

void solve()
{
    int l = x / __gcd(x, y) * y;
    int both = n / l;

    int a = n / x - both;
    int b = n / y - both;

    int sumx = (n * (n + 1) / 2) - ((n - a) * (n - a + 1)) / 2;
    int sumy = (b * (b + 1)) / 2;

    cout << sumx - sumy << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        if (x == y)
        {
            cout << 0 << "\n";
            continue;
        }
        solve();
    }

    return 0;
}