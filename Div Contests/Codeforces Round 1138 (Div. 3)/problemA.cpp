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
    int l, a, b;
    cin >> l >> a >> b;
    vector<int> straw(50, 0);

    int count = 0;
    int tempi = 0;
    do
    {
        straw[tempi] += 1;
        tempi = (tempi + a) % l;
    } while (tempi != 0);

    tempi = 0;
    do
    {
        straw[tempi] += 1;
        tempi = (tempi + b) % l;
    } while (tempi != 0);

    for (int i = 0; i < l; i++)
    {
        if (straw[i] == 2)
            count++;
    }

    cout << count << "\n";
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
