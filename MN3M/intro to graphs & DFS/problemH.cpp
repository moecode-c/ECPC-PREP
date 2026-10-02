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
vector<vector<bool>> vis;

bool valid(int i, int j)
{
    return i > 0 and i <= n and j > 0 and j <= m and
           grid[i][j] == '.' and vis[i][j] == false;
}
int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};

void dfs(int i , int j)
{
    vis[i][j] = true;

    for(int k = 0 ; k < 4 ; k++){
        int inew = i + di[k];
        int jnew = j + dj[k];

        if(valid(inew,jnew))
        dfs(inew,jnew);
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    grid.resize(n + 1, vector<char>(m + 1));
    vis.resize(n + 1, vector<bool>(m + 1,false));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int rooms = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(!vis[i][j] and grid[i][j] != '#'){
                dfs(i,j);
                rooms++;
            }
        }
    }


    cout << rooms;
    return 0;
}
