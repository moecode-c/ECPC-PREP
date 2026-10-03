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

int dx[] = {1, -1, 0, 0, 1, -1, -1, 1};
int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
int h, w, maxcount;
vector<vector<char>> grid;
vector<vector<bool>> vis;

bool valid(int i, int j)
{
    return i > 0 and j > 0 and i <= h and j <= w
    and vis[i][j] == false;
}

void dfs(int i, int j, int bestcount)
{
    vis[i][j] = true;

    for (int k = 0; k < 8; k++)
    {
        int inew = i + dx[k];
        int jnew = j + dy[k];

        if (valid(inew, jnew) and (int)grid[inew][jnew] == ((int)grid[i][j] + 1))
        {
            maxcount = max(maxcount, bestcount + 1);
            dfs(inew, jnew, bestcount + 1);
        }
    }
}

int32_t main()
{
    fast_io();

    int tc = 0;
    while (cin >> h >> w and !(h == 0 and w == 0))
    {
        tc++;
        maxcount = 0;
        grid.assign(h + 1, vector<char>(w + 1));
        vis.assign(h + 1, vector<bool>(w + 1, false));
        for (int i = 1; i <= h; i++)
        {
            string s;
            cin >> s;
            for (int j = 1; j <= w; j++)
            {
                grid[i][j] = s[j - 1];
            }
        }

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (grid[i][j] == 'A')
                {
                    maxcount = max(maxcount, 1LL);
                    dfs(i, j, 1);
                }
            }
        }

        cout << "Case " << tc << ": " << maxcount << "\n";
    }

    return 0;
}