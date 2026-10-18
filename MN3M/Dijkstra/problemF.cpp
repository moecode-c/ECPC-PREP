#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int a, b, c, d;
vector<vector<int>> dis;
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

bool valid(int pa, int pb) {
    return pa >= 0 and pb >= 0 and pa < 8 and pb < 8;
}

int dijkstra() {
    priority_queue<tuple<int, int, int>,
                   vector<tuple<int, int, int>>,
                   greater<tuple<int, int, int>>> pq;

    pq.push({0, a, b});
    dis[a][b] = 0;

    while (!pq.empty()) {
        auto [dn, an, bn] = pq.top();
        pq.pop();

        if (dn > dis[an][bn]) continue;

        if (an == c and bn == d) {
            return dn;
        }

        for (int k = 0; k < 8; k++) {
            int r = an + dx[k];
            int l = bn + dy[k];

            if (!valid(r, l))
                continue;

            int cost = an * r + bn * l;

            if (dn + cost < dis[r][l]) {
                dis[r][l] = dn + cost;
                pq.push({dis[r][l], r, l});
            }
        }
    }

    return -1;
}

int32_t main() {
    fast_io();

    while (cin >> a >> b >> c >> d) {
        dis.assign(8, vector<int>(8, 1e18));
        cout << dijkstra() << '\n';
    }

    return 0;
}