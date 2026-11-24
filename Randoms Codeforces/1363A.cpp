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
    int n, x;
    cin >> n >> x;
    int numeven = 0, numodd = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 1)
            numodd++;
        else
            numeven++;
    }

    bool ok = false;
    for (int k = 1; k <= min(numodd, x); k += 2)
    {
        if (x - k <= numeven)
            ok = true;
    }

    cout << (ok ? "Yes\n" : "No\n");
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
