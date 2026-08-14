#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
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

        if(grid[inew][jnew] == '-' || vis[inew][jnew])
        continue;


            dfs(inew,jnew);
    }
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        
    }

    return 0;
}
