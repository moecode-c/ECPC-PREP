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

int32_t main()
{
    fast_io();

    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--)
    {
        int y, x;
        cin >> x >> y;
        int sec = pre[n] - pre[n - x];
        int first = pre[n] - pre[n - (x - y)];
        cout << sec - first << '\n';
    }

    return 0;
}
