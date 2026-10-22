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

int32_t main()
{
    fast_io();

    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push({i, x});
    }

    int last = 0;
    while (!q.empty())
    {
        auto [id, need] = q.front();
        q.pop();
        need -= m;
        if (need > 0)
            q.push({id, need});
        else
            last = id;
    }

    cout << last;
    return 0;
}