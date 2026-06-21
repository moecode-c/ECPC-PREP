#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<vector<char>> grid;
vector<vector<bool>> vis;

int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 and i < n and j >= 0 and j < m);
}

void dfs(int i, int j)
{
    vis[i][j] = true;

    for (int d = 0; d < 4; d++)
    {
        int inew = i + di[d];
        int jnew = j + dj[d];

        if (!valid(inew, jnew))
            continue;

        if(grid[inew][jnew] == '#' || vis[inew][jnew])
        continue;


            dfs(inew,jnew);
    }
}

int main()
{
    fast_io();


        cin >> n >> m;
        grid.assign(n, vector<char>(m));
        vis.assign(n,vector<bool>(m,false));

        int rooms = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(!vis[i][j] && grid[i][j] == '.'){
                    rooms++;
                    dfs(i,j);
                }
            }
        }
    

        cout << rooms << endl;

    return 0;
}
