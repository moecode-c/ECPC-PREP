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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));

    vector<int> pre(n + 1, 0), ans(n);
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + v[i].first;

    int end = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + 1 < n and pre[i + 1] < v[i + 1].first)
            end = i + 1;
        ans[v[i].second] = end - 1;
    }

    for (int i = 0; i < n; i++)
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