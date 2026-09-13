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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(all(v));

        int l = 0, r = 0, count = 0;
        unordered_map<int, int> mp;
        while (r < n)
        {
            if (l < r && v[r] > v[r - 1] + 1)
            {
                mp.clear();
                l = r;
            }

            mp[v[r]]++;

            while (mp.size() > k)
            {
                mp[v[l]]--;

                if (mp[v[l]] == 0)
                    mp.erase(v[l]);

                l++;
            }

            count = max(count, r - l + 1);

            r++;
        }

        cout << count << '\n';
    }

    return 0;
}
