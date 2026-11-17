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

    int n;
    cin >> n;
    map<int,int> mp;
    int ans = 0;

    for(int i = 1 ; i <= n ; i++){
        int num;
        cin >> num;
        mp[num - i] += num;
        ans = max(ans, mp[num - i]);
    }

    cout << ans << '\n';
    return 0;
}