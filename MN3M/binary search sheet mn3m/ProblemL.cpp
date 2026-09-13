#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n, t;
vector<ll> ppl;

bool can(ll mid)
{
    ll sum = accumulate(all(ppl), 0LL);

    ll threshold = (sum + mid + 2 * n - 1) / (2 * n);

    ll pos = lower_bound(all(ppl), threshold) - ppl.begin();

    return pos > n / 2;
}

int main()
{
    fast_io();

    cin >> t;

    while (t--)
    {
        cin >> n;

        ppl.resize(n);

        for (int i = 0; i < n; i++)
            cin >> ppl[i];

        sort(all(ppl));

        if (n <= 2)
        {
            cout << -1 << '\n';
            continue;
        }

        ll l = 0, r = 4e18;
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

        cout << ans << '\n';
    }

    return 0;
}