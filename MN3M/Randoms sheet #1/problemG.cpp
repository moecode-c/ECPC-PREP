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

vector<int> fac;
int n, t;

bool can(int mid)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += mid / fac[i];
    }
    return count >= t;
}

int32_t main()
{
    fast_io();

    cin >> n >> t;
    fac.resize(n);
    int minK = 4e18;
    for (int i = 0; i < n; i++) {
        cin >> fac[i];
        minK = min(minK, fac[i]);
    }

    int l = 1, r = t * minK, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (can(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;
    return 0;
}