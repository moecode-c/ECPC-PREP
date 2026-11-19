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
vector<vector<int>> grid;
vector<vector<bool>> vis;

bool valid(int i, int j)
{
    return i > 0 and j > 0 and i <= n and j <= m and grid[i][j] != 0;
}

void dfs(int i, int j, int &sum)
{
    vis[i][j] = true;
    sum += grid[i][j];

    for (int k = 0; k < 4; k++)
    {
        int inew = i + dx[k];
        int jnew = j + dy[k];

        if (valid(inew, jnew) and !vis[inew][jnew])
        {
            dfs(inew, jnew, sum);
        }
    }
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        grid.assign(n + 1, vector<int>(m + 1));
        vis.assign(n + 1, vector<bool>(m + 1, false));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> grid[i][j];
            }
        }

        int maxnum = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (!vis[i][j] and grid[i][j] != 0)
                {
                    int sum = 0;
                    dfs(i, j, sum);
                    maxnum = max(maxnum, sum);
                }
            }
        }

        cout << maxnum << "\n";
    }
    return 0;
}
