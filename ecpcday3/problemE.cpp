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
    int n, l;
    cin >> n >> l;

    int num = 2;
    int valid = 0;

    while (num <= l)
    {
        valid++;
        if (num % 2 == 0)
        {
            num <<= 1;
            num += 1;
        }
        else
        {
            num <<= 1;
        }
        if (valid >= n)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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
