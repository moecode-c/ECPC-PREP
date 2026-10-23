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

int freq[400005];

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int key = x - i + n;
            ans += freq[key];
            freq[key]++;
        }

        cout << ans << '\n';

        for (int i = 0; i <= 2 * n; i++)
            freq[i] = 0;
    }

    return 0;
}