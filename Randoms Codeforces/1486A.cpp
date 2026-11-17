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
    vector<int> v(n, 0);
    int extra = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        extra += v[i] - (i);
        if (extra < 0)
            ok = false;
    }
    if (ok)
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