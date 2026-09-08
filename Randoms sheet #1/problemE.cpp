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

    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int need = x - a[i] - a[j];

            if (mp.count(need))
            {
                cout << mp[need] + 1 << " " << i + 1 << " " << j + 1;
                return 0;
            }
        }

        mp[a[i]] = i;
    }

    cout << "IMPOSSIBLE";
}