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
        string s;
        cin >> s;

        int bad = 0;
        for (int i = 0; i + 1 < n; i++)
            if (s[i] == s[i + 1])
                bad++;

        cout << (bad + 1) / 2 << '\n';
    }

    return 0;
}