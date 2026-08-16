#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool can(vector<int> fac, int mid, int t, int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += floor((double)mid/fac[i]);
    }
    return sum >= t;
}

int main()
{
    fast_io();

    int n, t;
    cin >> n >> t;

    vector<int> fac(n);
    for(int i = 0 ; i < n ; i++) cin >> fac[i];
    int l = 0, r = t;

    int ans = t;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(fac, mid, t, n))
        {
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << ans + 1;
    return 0;
}
