#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n, k;
vector<pair<ll, ll>> ing;

bool can(ll mid)
{
    ll tempmagic = k;

    for (int i = 0; i < n; i++)
    {
        if (mid > (ing[i].second + tempmagic) / ing[i].first)
            return false;

        ll needed = ing[i].first * mid;

        if (needed > ing[i].second)
            tempmagic -= needed - ing[i].second;
    }

    return true;
}

int main()
{
    fast_io();

    cin >> n >> k;

    ing.assign(n, {0, 0});

    for (int i = 0; i < n; i++)
        cin >> ing[i].first;

    for (int i = 0; i < n; i++)
        cin >> ing[i].second;

    ll l = 0, r = 2e9;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

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

    cout << ans;

    return 0;
}