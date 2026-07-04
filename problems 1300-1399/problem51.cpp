#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> eaten;
int di[] = {-1, 1, 0, 0};
int dj[] = {0, 0, -1, 1};

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main()
{
    fast_io();

    cin >> n >> m;
    grid.assign(n , vector<char>(m));
    eaten.assign(n , vector<bool>(m,false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int eatennum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'P' && !eaten[i][j])
            {
                for (int k = 0; k <= 3; k++)
                {
                    int inew = i + di[k];
                    int jnew = j + dj[k];

                    if (!valid(inew, jnew))
                        continue;

                    if (grid[inew][jnew] == 'W' && !eaten[inew][jnew])
                    {
                        eaten[inew][jnew] = true;
                        eaten[i][j] = true;
                        eatennum++;
                    }
                }
            }
        }
    }

    cout << eatennum;
    return 0;
}
