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
        int n, attpow;
        cin >> n >> attpow;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(all(v));
        int curdmg = 0, count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            curdmg += attpow;
            if (v[i] > curdmg)
            {
                int extra = ceil((double)(v[i] - curdmg) / attpow);
                count += extra;
                curdmg += extra * attpow;
            }
        }
        cout << count << "\n";
    }
    return 0;
}