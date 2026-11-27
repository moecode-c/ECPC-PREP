#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int a, x, k;

bool can(int mid)
{
    int cost = 0, l = 0;
    while (mid > 0)
    {
        int take = min(k + 1, mid);
        cost += take * ((1 << l) - x);
        mid -= take;
        l++;
    }
    return cost < a;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> k;

        int l = 0, r = 30 * (k + 1), ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (can(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << a + x * ans << "\n";
    }

    return 0;
}
