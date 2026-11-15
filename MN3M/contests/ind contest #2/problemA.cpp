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
    if (n >= 1900)
    {
        cout << "Division 1" << '\n';
    }
    else if (n >= 1600)
    {
        cout << "Division 2" << '\n';
    }
    else if (n >= 1400)
    {
        cout << "Division 3" << '\n';
    }
    else{
        cout << "Division 4" << '\n';
    }
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
