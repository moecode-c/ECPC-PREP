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
        vector<int> v(n + 1), pre(n + 1), suf(n + 2);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pre[i] = pre[i - 1] + v[i];
        }

        for(int i = n ; i >= 1 ; i--)
        suf[i] = suf[i+1] + v[i];

        int minnum = LLONG_MAX;
        int ind = 0;
        for (int i = 1; i <= n; i++)
        {
            if (minnum > pre[i] + suf[i])
            {
                minnum = min(minnum, pre[i] + suf[i]);
                ind = i;
            }
        }

        cout << ind << endl;
    }

    return 0;
}
