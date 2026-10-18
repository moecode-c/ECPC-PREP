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
vector<vector<int>> grid;
vector<vector<int>> dis;
int n, m;

bool valid(int pm, int pn)
{
    return pm >= 0 and pn >= 0 and pm < n and pn < m;
}

void dijkstra()
{
    priority_queue<tuple<int, int, int>,
                   vector<tuple<int, int, int>>,
                   greater<tuple<int, int, int>>>
        pq;

    dis[0][0] = grid[0][0];
    pq.push({grid[0][0], 0, 0});

    while (!pq.empty())
    {
        auto [d, xn, yn] = pq.top();
        pq.pop();

        if (d > dis[xn][yn])
            continue;

        for (int k = 0; k < 4; k++)
        {
            int x = dx[k] + xn;
            int y = dy[k] + yn;

            if (!valid(x, y))
            {
                continue;
            }

            int cost = d + grid[x][y];

            if (cost < dis[x][y])
            {
                dis[x][y] = cost;
                pq.push({cost, x, y});
            }
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
        cin >> n;
        cin >> m;
        grid.assign(n, vector<int>(m));
        dis.assign(n, vector<int>(m, 1e18));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        dijkstra();
        cout << dis[n-1][m-1] << '\n';
    }

    return 0;
}
