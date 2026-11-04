#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n + 1, 0);

    int m = 0;
    for (int i = 1; i <= n; i++)
        m ^= i;

    int bits = 0;
    while ((1 << bits) <= n)
    {
        bits++;
    }

    for (int bit = bits; bit >= 1; bit--)
    {
        if (!((m >> bit) & 1))
        {
            int x = 1 << (bit - 1);
            ans[x] = 1;
            m ^= x ^ (2 * x);
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
        
    cout << '\n';
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
