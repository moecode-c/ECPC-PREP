#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int power(int a, int b, int mod)
{
    int ans = 1;

    while (b > 0)
    {
        if (b & 1)
            ans = ans * a % mod;

        a = a * a % mod;
        b /= 2;
    }

    return ans;
}

int32_t main()
{
    fast_io();

    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int exponent = power(b, c, MOD - 1);

        cout << power(a, exponent, MOD) << '\n';
    }

    return 0;
}