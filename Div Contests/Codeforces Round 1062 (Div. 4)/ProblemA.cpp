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

    int t;
    cin >> t;
    int a, b, c, d;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a == b && c == d && a == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
