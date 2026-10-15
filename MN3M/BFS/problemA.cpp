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

int R, C;
vector<string> g;
vector<vector<int>> dist;
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};

void bfs01()
{
    deque<pair<int, int>> dq;
    dist[0][0] = 0;
    dq.push_back({0, 0});

    while (!dq.empty())
    {
        auto [r, c] = dq.front();
        dq.pop_front();

        for (int k = 0; k < 4; k++)
        {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;

            int w = (g[nr][nc] != g[r][c]);
            if (dist[r][c] + w < dist[nr][nc])
            {
                dist[nr][nc] = dist[r][c] + w;
                if (w == 0) dq.push_front({nr, nc});
                else dq.push_back({nr, nc});
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
        cin >> R >> C;
        g.assign(R, "");
        for (auto &row : g) cin >> row;
        dist.assign(R, vector<int>(C, (int)1e18));
        bfs01();
        cout << dist[R - 1][C - 1] << '\n';
    }
    return 0;
}