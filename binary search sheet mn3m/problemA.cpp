#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool can(vector<int> &fac, int n, ll mid, ll t) 
{ 
    ll sum = 0; 
 
    for (int i = 0; i < n; i++) 
    { 
        sum += mid / fac[i];

        if (sum >= t)
            return true;
    } 
 
    return false; 
}

int main()
{
    fast_io();

    int n;
    ll t;

    cin >> n >> t;

    vector<int> fac(n);

    for (int i = 0; i < n; i++)
        cin >> fac[i];

    ll l = 0;
    ll r =  t * (*min_element(all(fac)));

    ll ans = r;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (can(fac, n, mid, t))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}