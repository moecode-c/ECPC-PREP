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
vector<vector<int>> adj;
vector<int> indeg;
vector<int> order;
priority_queue<int, vector<int>, greater<int>> pq;

void bfs()
{
    while (!pq.empty())
    {
        int u = pq.top();
        pq.pop();
        order.push_back(u);

        for (int v : adj[u])
        {
            indeg[v]--;
            if (indeg[v] == 0)
                pq.push(v);
        }
    }
}

int32_t main()
{
    fast_io();

    cin >> n >> m;
    adj.resize(n + 1);
    indeg.assign(n + 1, 0);

    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        indeg[b]++;
    }

    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            pq.push(i);

    bfs();

    if (order.size() < n)
    {
        cout << "Sandro fails.";
        return 0;
    }

    for (int x : order)
        cout << x << " ";
    return 0;
}