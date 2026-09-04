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

int mod = 1e9 + 7;

void expo(int a, int b)
{
    int result = 1;
    a %= mod;

    while (b > 0)
    {
        if (b & 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    cout << result << '\n';
}

int32_t main()
{
    fast_io();

    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        expo(a,b);
    }

    return 0;
}
