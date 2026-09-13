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

        vector<int> d(n);

        for (int i = 0; i < n; i++)
            cin >> d[i];

        sort(all(d));

        int x = d[0] * d[n - 1];

        vector<int> divisors;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                divisors.push_back(i);

                if (i != x / i)
                    divisors.push_back(x / i);
            }
        }

        sort(all(divisors));

        if (divisors == d)
            cout << x << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}