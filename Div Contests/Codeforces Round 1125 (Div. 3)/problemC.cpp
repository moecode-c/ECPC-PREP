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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_map<int, int> mp;
        vector<int> v(n - 4);
        for (int i = 0; i < n - 4; i++)
        {
            v[i] = a[i] + a[i + 2] - a[i + 4];
            mp[v[i]]++;
        }

        int ans = 0;
        for (auto i : mp)
        {
            ans += i.second * (i.second - 1) / 2;
        }

        for (int i = 0; i + 2 < n - 4; i++)
        {
            if (v[i] == v[i + 2])
                ans--;
        }

        for (int i = 0; i + 4 < n - 4; i++)
        {
            if (v[i] == v[i + 4])
                ans--;
        }

        cout << ans << "\n";
    }
    return 0;
}
