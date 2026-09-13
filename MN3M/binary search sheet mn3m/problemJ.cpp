#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, k;
vector<ll> a;

bool can(ll r)
{
    int cows = 0;
    int i = 0;

    while (i < n)
    {
        cows++;

        ll right = a[i] + 2 * r;

        while (i < n && a[i] <= right)
            i++;

        if (cows > k)
            return false;
    }

    return true;
}

void solve()
{
    cin >> n >> k;

    a.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    ll l = 0;
    ll r = 1000000000;
    ll ans = r;

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

int main()
{
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);

    fast_io();

    solve();

    return 0;
}