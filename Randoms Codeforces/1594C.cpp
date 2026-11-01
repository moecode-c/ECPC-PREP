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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    bool allEqual = true;
    for (int i = 0; i < n; i++)
        if (s[i] != c)
            allEqual = false;

    if (allEqual)
    {
        cout << 0 << '\n';
        return;
    }

    for (int x = 1; x <= n; x++)
    {
        bool ok = true;
        for (int j = x; j <= n; j += x)
        {
            if (s[j - 1] != c)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << 1 << '\n';
            cout << x << '\n';
            return;
        }
    }

    cout << 2 << '\n';
    cout << n - 1 << " " << n << '\n';
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