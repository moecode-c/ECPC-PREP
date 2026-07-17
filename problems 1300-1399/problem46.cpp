#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<ll> luck;

void dfs(ll num, int len)
{
    if (len == 11)
        return;

    luck.push_back(num * 10 + 4);
    luck.push_back(num * 10 + 7);

    dfs(num * 10 + 4, len + 1);
    dfs(num * 10 + 7, len + 1);
}

int main()
{
    fast_io();

    dfs(0, 1);
    sort(luck.begin(), luck.end());

    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    ll cur = l;

    while (cur <= r)
    {
        ll nxt = *lower_bound(luck.begin(), luck.end(), cur);

        ll last = min(r, nxt);

        ans += (last - cur + 1) * nxt;

        cur = last + 1;
    }

    cout << ans;

    return 0;
}