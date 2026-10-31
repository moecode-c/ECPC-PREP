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

int n;
vector<int> v;

void solve()
{
    cin >> n;
    v.assign(n, 0);
    int maxnum = -1e18;
    int minnum = 1e18;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxnum = max(maxnum, v[i]);
        minnum = min(minnum, v[i]);
    }

    sort(all(v));
    int midnum = v[n / 2];

    int curloss = 0;
    for (int i = 0; i < n; i++)
    {
        curloss += abs(midnum - v[i]);
    }

    cout << curloss << " " << abs(maxnum - minnum) << '\n';
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