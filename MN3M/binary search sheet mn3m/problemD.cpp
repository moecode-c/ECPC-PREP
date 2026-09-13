#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll fx1, fy1, fx2, fy2, n;
string s;

ll dx = 0, dy = 0;

bool can(ll mid)
{
    ll cycles = mid / n;
    ll rem = mid % n;

    ll xm = fx1 + cycles * dx;
    ll ym = fy1 + cycles * dy;

    for (int i = 0; i < rem; i++)
    {
        if (s[i] == 'U')
            ym++;
        else if (s[i] == 'D')
            ym--;
        else if (s[i] == 'L')
            xm--;
        else
            xm++;
    }

    return mid >= (abs(fy2 - ym) + abs(fx2 - xm));
}

int main()
{
    fast_io();

    cin >> fx1 >> fy1;
    cin >> fx2 >> fy2;
    cin >> n;
    cin >> s;

    for (char c : s)
    {
        if (c == 'U')
            dy++;
        else if (c == 'D')
            dy--;
        else if (c == 'L')
            dx--;
        else
            dx++;
    }

    ll l = 0, r = 1e18;

    ll ans = -1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (can(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;

    return 0;
}