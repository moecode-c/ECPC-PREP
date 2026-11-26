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

    string s;
    cin >> s;

    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    hh = (hh + 5) % 24;

    if (hh < 10)
    {
        cout << 0;
    }
    cout << hh << s.substr(2) << "\n";

    return 0;
}