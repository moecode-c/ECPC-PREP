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

bool can(ll mid)
{
    int subs = 1;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] > mid)
        {
            subs++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }

    return subs <= k;
}

void solve() {
    cin >> n >> k;

    a.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = *max_element(all(a));
    ll r = accumulate(all(a), 0LL);
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

int main() {
    fast_io();

    solve();

    return 0;
}