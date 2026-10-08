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

int fx1, fy1, r;

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> fx1 >> fy1 >> r;
        bool can = false;
        for (int i = -r; i <= r and !can; i++)
        {
            for (int j = -r; j <= r and !can; j++)
            {
                if (i * i + j * j == r * r)
                {
                    cout << fx1 + i << " " << fy1 + j << "\n";
                    can = true;
                }
            }
        }
    }

    return 0;
}