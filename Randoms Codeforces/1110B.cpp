#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).rbegin(), (x).rend()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n , m , k;
vector<int> v;

int32_t main() {
    fast_io();

    cin >> n >> m >> k;
    v.assign(n,0);
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    vector<int> diff;
    for(int i = 0 ; i < n - 1; i++) diff.push_back(v[i+1] - v[i] - 1);

    sort(all(diff));

    int ans = v[n-1] - v[0] + 1;
    for(int i = 0 ; i < k - 1 ; i++) ans -= diff[i];

    cout << ans;
    return 0;
}