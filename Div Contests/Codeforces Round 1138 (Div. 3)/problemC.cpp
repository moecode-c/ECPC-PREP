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
    string s;
    cin >> n >> s;
    bool can = false;

    if (n % 2 == 1)
    {
        cout << "NO" << '\n';
        return;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                can = true;
                break;
            }
        }
    }

    if(can)
    cout << "YES\n";
    else
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
