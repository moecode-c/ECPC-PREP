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
int x, y, m;
string s;
vector<vector<vector<int>>> dp;

int recdp(int i, int curx, int cury)
{
    if (i == m)
    {
        return curx + cury;
    }

    int &ret = dp[i][curx][cury];
    if (~ret)
        return ret;

    int ch1 = curx + cury;

    int ch2 = -1e18;
    if (curx > 0)
    {
        if (s[i] == '+')
            ch2 = recdp(i + 1, curx - 1, cury + 1);
        else
            ch2 = recdp(i + 1, curx - 1, cury);
    }

    int ch3 = -1e18;
    if (cury > 0)
    {
        if (s[i] == '+')
            ch3 = recdp(i + 1, curx, cury + 1);
        else
            ch3 = recdp(i + 1, curx + 1, cury - 1);
    }

    return ret = max({ch1, ch2, ch3});
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {

        cin >> x >> y >> m >> s;
        dp.assign(m + 1, vector<vector<int>>(105, vector<int>(105, -1)));

        cout << recdp(0, x, y) << "\n";
    }

    return 0;
}