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
int n, m, k;
vector<vector<char>> grid;
vector<vector<bool>> vis;
vector<vector<pair<int, int>>> comps;
vector<pair<int, int>> comp;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int i, int j)
{
    return i >= 1 and j >= 1 and i <= n and j <= m and !vis[i][j] and grid[i][j] != '*';
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    comp.push_back({i, j});

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

    cin >> n >> m >> k;

    grid.assign(n + 1, vector<char>(m + 1));
    vis.assign(n + 1, vector<bool>(m + 1, false));
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
            if (!vis[i][j] and grid[i][j] != '*')
            {
                comp.assign({});
                dfs(i, j);
                comps.push_back(comp);
            }
        }
    }

    sort(comps.begin(), comps.end(), [](auto &a, auto &b)
         { return a.size() < b.size(); });

    int numcells = 0;
    int numlakes = comps.size();
    // cout << numlakes << " before ";
    for (int i = 0; i < comps.size(); i++)
    {
        for (int j = 0; j < comps[i].size(); j++)
        {
            if (comps[i][j].first == n or comps[i][j].second == m or comps[i][j].first == 1 or comps[i][j].second == 1)
            {
                numlakes--;
                break;
            }
        }
    }
    // cout << numlakes << " after ";

    for (int i = 0; i < comps.size(); i++)
    {
        bool can = true;
        if (k == numlakes)
        {
            break;
        }
        for (int j = 0; j < comps[i].size(); j++)
        {
            if (comps[i][j].first == n or comps[i][j].second == m or comps[i][j].first == 1 or comps[i][j].second == 1)
            {
                can = false;
                break;
            }
        }

        if (can)
        {
            for (int j = 0; j < comps[i].size(); j++)
            {
                grid[comps[i][j].first][comps[i][j].second] = '*';
                numcells++;
            }
            numlakes--;
        }
    }

    cout << numcells << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << grid[i][j];
        }
        cout << '\n';
    }

    return 0;
}
