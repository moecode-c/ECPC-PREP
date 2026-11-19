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
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;
vector<vector<char>> grid;
vector<vector<bool>> vis;
bool can = false;

bool valid(int i, int j)
{
    return i > 0 and j > 0 and i <= n and j <= m;
}

void dfs(int i, int j, char ch, int ipar, int jpar)
{
    vis[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int inew = i + dx[k];
        int jnew = j + dy[k];

        if (!valid(inew, jnew))
        {
            continue;
        }

        if (grid[inew][jnew] != ch)
        {
            continue;
        }

        if (!vis[inew][jnew])
        {
            dfs(inew, jnew, ch, i, j);
        }
        else if (!(inew == ipar and jnew == jpar))
        {
            can = 1;
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    grid.assign(n + 1, vector<char>(m + 1));
    vis.assign(n + 1, vector<bool>(m + 1, false));
    can = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!vis[i][j])
            {
                dfs(i, j, grid[i][j], 0, 0);
            }
        }
    }

    cout << (can ? "Yes" : "No") << "\n";

    return 0;
}