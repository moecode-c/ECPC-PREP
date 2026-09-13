#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
vector<vector<char>> grid;
vector<vector<bool>> vis;
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 and i < n and j >= 0 and j < m);
}

int dfs(int i, int j)
{

    vis[i][j] = true;

    for (int d = 0; d < 4; d++)
    {
        int inew = i + di[d];
        int jnew = j + dj[d];

        if (valid(inew, jnew) && grid[inew][jnew] == 'T')
            return (grid[i][j] == 'G');
    }

    int cur = (grid[i][j] == 'G');

    for (int d = 0; d < 4; d++)
    {
        int inew = i + di[d];
        int jnew = j + dj[d];

        if (valid(inew, jnew) && grid[inew][jnew] != '#' && !vis[inew][jnew])
            cur += dfs(inew, jnew);
    }

    return cur;
}

int main()
{
    fast_io();

    while (cin >> m >> n)
    {
        grid.assign(n, vector<char>(m));
        vis.assign(n, vector<bool>(m));

        pair<int, int> p;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'P')
                    p = {i, j};
            }
        }

        cout << dfs(p.first, p.second) << endl;
    }
    return 0;
}
