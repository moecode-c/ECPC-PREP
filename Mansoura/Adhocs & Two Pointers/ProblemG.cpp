#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll m, n;
vector<ll> flowers;

ll solve()
{
    ll sum = 0, l = 0 , r = 0;
    ll ans = 0;

    while(r < n){
        sum += flowers[r];

        while(l <= r && (sum > m || flowers[r] - flowers[l] > 1)){
            sum -= flowers[l];
            l++;
        }

        ans = max(ans , sum);
        r++;
    }

    return ans;
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        flowers.assign(n, 0);
        for(int i = 0 ; i < n ; i++)
        cin >> flowers[i];
        sort(flowers.begin(),flowers.end());

        cout << solve() << endl;
    }

    return 0;
}
