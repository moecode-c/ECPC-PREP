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

int n;
vector<int> p;

int32_t main()
{
    fast_io();

    cin >> n;
    p.resize(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> p[i];

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int cur = i;

        while (cur != -1)
        {
            cnt++;
            cur = p[cur];
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}