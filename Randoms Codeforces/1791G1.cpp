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
    int n, coins;
    cin >> n >> coins;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[i] = num + ((i+1));
    }

    sort(all(v));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (coins >= v[i])
        {
            count++;
            coins -= v[i];
        }
    }

    cout << count << '\n';
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
