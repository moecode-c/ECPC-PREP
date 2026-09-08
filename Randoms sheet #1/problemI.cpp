#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int32_t main() {
    fast_io();

    int n , x;
    cin >> n >> x;
    vector<int> v(n),pre(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i-1];
        pre[i] = pre[i-1] + v[i-1];
    }

    unordered_map<int,int> mp;
    mp[0] = 1;
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        ans += mp[pre[i] - x];
        mp[pre[i]]++;
    }

    cout << ans;

    return 0;
}
