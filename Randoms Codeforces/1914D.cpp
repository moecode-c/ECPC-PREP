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

const int NEG = -1e18;
const int N = 100005;

int n;
int days[N][3];
int dp[N][2][2][2];

int act(int i, int a, int b, int c)
{
    if (a && b && c)
        return 0;
    if (i == n)
        return NEG;

    int &ret = dp[i][a][b][c];
    if (~ret)
        return ret;

    ret = act(i + 1, a, b, c);

    if (!a)
        ret = max(ret, days[i][0] + act(i + 1, 1, b, c));

    if (!b)
        ret = max(ret, days[i][1] + act(i + 1, a, 1, c));

    if (!c)
        ret = max(ret, days[i][2] + act(i + 1, a, b, 1));

    return ret;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int j = 0; j < 3; j++)
            for (int i = 0; i < n; i++)
                cin >> days[i][j];

        for (int i = 0; i < n; i++)
            for (int a = 0; a < 2; a++)
                for (int b = 0; b < 2; b++)
                    for (int c = 0; c < 2; c++)
                        dp[i][a][b][c] = -1;

        cout << act(0, 0, 0, 0) << '\n';
    }

    return 0;
}