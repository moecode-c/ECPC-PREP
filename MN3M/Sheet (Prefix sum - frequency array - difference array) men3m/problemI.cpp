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

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> pref(4, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        pref[1][i] = pref[1][i - 1];
        pref[2][i] = pref[2][i - 1];
        pref[3][i] = pref[3][i - 1];

        pref[x][i]++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << pref[1][b] - pref[1][a - 1] << " " << pref[2][b] - pref[2][a - 1] << " " << pref[3][b] - pref[3][a - 1] << '\n';
    }

    return 0;
}