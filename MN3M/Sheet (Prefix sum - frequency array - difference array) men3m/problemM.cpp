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
        int k, n;
        cin >> k >> n;

        k -= n - 1;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> vc;

        for (int i = n - 1; i > 0; i--)
        {
            vc.push_back(a[i] - a[i - 1]);
        }

        bool flag = 0;

        if (vc.size() == 0)
        {
            cout << "Yes\n";
            continue;
        }

        for (int i = 0; i + 1 < vc.size(); i++)
        {
            if (vc[i] < vc[i + 1])
                flag = 1;
        }

        if (a[0] <= 0 && a[0] / k > vc.back())
            flag = 1;

        if (a[0] > 0 && ceil((double)a[0] / k) > vc.back())
            flag = 1;

        if (flag)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}