#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, size;

    DSU(int n)
    {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node]);
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);

        if (u == v)
            return;

        if (size[u] < size[v])
            swap(u, v);

        parent[v] = u;
        size[u] += size[v];
    }
};

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> permutation(n + 1);
    vector<int> position(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> permutation[i];
        position[permutation[i]] = i;
    }

    DSU dsu(n);

    for (int i = 1; i + x <= n; i++)
        dsu.merge(i, i + x);

    for (int i = 1; i + y <= n; i++)
        dsu.merge(i, i + y);

    for (int value = 1; value <= n; value++)
    {
        if (dsu.find(value) != dsu.find(position[value]))
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}