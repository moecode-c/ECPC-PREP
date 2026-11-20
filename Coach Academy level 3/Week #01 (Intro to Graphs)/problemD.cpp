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
int n, m;
vector<vector<char>> grid;
vector<vector<int>> vis;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int i, int j)
{
    return i > 0 and j > 0 and i <= n and j <= m and grid[i][j] != '#' and !vis[i][j];
}

void dfs(int i, int j)
{
    vis[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int inew = i + dx[k];
        int jnew = j + dy[k];

        if (valid(inew, jnew))
            dfs(inew, jnew);
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    grid.assign(n + 1, vector<char>(m + 1));
    vis.assign(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!vis[i][j] and grid[i][j] != '#')
            {
                count++;
                dfs(i, j);
            }
        }
    }


    cout << count;
    return 0;
}