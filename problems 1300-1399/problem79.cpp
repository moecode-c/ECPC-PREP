#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    // Read input first
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int ans = 0;

    // Check every bottle
    for (int i = 0; i < n; i++)
    {
        bool can = false;

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (b[j] == a[i])
            {
                can = true;
                break;
            }
        }

        if (!can)
            ans++;
    }

    cout << ans;

    return 0;
}