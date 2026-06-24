#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll h , w;

bool valid(ll i, ll j)
{
    return i >= 0 && i <= h && j >= 0 && j <= w;
}

vector<vector<char>> grid;
vector<vector<ll>> dp;

ll maze(ll i, ll j)
{
    if (i == h && j == w)
        return 1;

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    // right
    ll ch1 = 0;
    if (valid(i, j + 1) && grid[i][j + 1] != '#')
        ch1 = maze(i, j + 1);

    // down
    ll ch2 = 0;
    if (valid(i + 1, j) && grid[i + 1][j] != '#')
        ch2 = maze(i + 1, j);

    return dp[i][j] = (ch1 + ch2) % (ll)(1e9 + 7);
}

int main()
{
    fast_io();

    cin >> h >> w;
    grid.resize(h + 1, vector<char>(w + 1));
    dp.assign(h + 1, vector<ll>(w + 1, -1));

    for (ll i = 1; i <= h; i++)
    {
        for (ll j = 1; j <= w; j++)
        {
            cin >> grid[i][j];
        }
    }

   
    cout << maze(1, 1);

    return 0;
}
