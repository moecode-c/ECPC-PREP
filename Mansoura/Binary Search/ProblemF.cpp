#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        vector<ll> pref(n);
        pref[0] = a[0];

        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + a[i];

        while (q--)
        {
            ll x;
            cin >> x;

            auto it = lower_bound(pref.begin(), pref.end(), x);

            if (it == pref.end())
                cout << -1 << '\n';
            else
                cout << it - pref.begin() + 1 << '\n';
        }
    }

    return 0;
}