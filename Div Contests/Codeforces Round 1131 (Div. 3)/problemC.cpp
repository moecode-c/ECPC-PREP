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

    int curscore = 0, ones = 0;
    bool midarr = false;

    for (int i = 0; i < n; i++)
    {
        curscore += v[i];
        if (v[i] == 1)
            ones++;
        if (i != 0 && i != n - 1 && v[i] >= 2)
            midarr = true;
    }

    if (ones == n)
        cout << -1 << '\n';
    else if (midarr)
        cout << curscore - 1 << '\n';
    else
        cout << curscore - (n - 1) << '\n';
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