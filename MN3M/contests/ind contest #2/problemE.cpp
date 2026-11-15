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
    string s;
    cin >> s;
    if (n == 1)
    {
        if (s[0] != 'W')
        {
            cout << "NO" << '\n';
            return;
        }
    }
    else if (n == 2)
    {
        if (s[0] == 'W' and s[1] != 'W' or s[1] == 'W' and s[0] != 'W')
        {
            cout << "NO" << '\n';
            return;
        }
    }

    bool theresblue = false, theresred = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            theresblue = true;
        }
        else if (s[i] == 'R')
        {
            theresred = true;
        }
        else
        {
            if (theresblue and !theresred or theresred and !theresblue)
            {
                cout << "NO\n";
                return;
            }
            theresred = false;
            theresblue = false;
        }
    }

    if (theresblue and !theresred or theresred and !theresblue)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES" << '\n';
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
