#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n;

bool valid(ll i, ll j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

vector<vector<char>> grid;
vector<vector<ll>> dp;

ll maze(ll i, ll j)
{
    if (i == n - 1 && j == n - 1)
        return 1;

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    // right
    ll ch1 = 0;
    if (valid(i, j + 1) && grid[i][j + 1] != '*')
        ch1 = maze(i, j + 1);

    // down
    ll ch2 = 0;
    if (valid(i + 1, j) && grid[i + 1][j] != '*')
        ch2 = maze(i + 1, j);

    return dp[i][j] = (ch1 + ch2) % (ll)(1e9 + 7);
}

int main()
{
    fast_io();

    cin >> n;
    grid.resize(n, vector<char>(n));
    dp.assign(n, vector<ll>(n, -1));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    if(grid[0][0] == '*' || grid[n-1][n-1] == '*')
    {
        cout << 0;
        return 0;
    }
    cout << maze(0, 0);

    return 0;
}
