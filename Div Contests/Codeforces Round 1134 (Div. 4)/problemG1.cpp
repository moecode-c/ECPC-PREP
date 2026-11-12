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
int n, k;
vector<int> v;
bool can(int mid)
{
    if (mid >= 1e9)
        return true;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int best = v[i];
        for (int j = 0; j < n; j++)
        {
            int dis = abs(i - j);
            dis = min(dis, n - dis);
            best = max(best, v[j] - mid * dis);
        }
        sum += best - v[i];
    }
    return sum <= k;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        v.assign(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int l = 0, r = 1e18;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (can(mid))
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}