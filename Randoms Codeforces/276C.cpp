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
int n , q;
vector<int> v , freq;

int32_t main() {
    fast_io();

    cin >> n >> q;
    v.assign(n,0);
    freq.assign(n + 2,0);
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    while (q--) {
        int l , r;
        cin >> l >> r;
        freq[l] += 1;
        freq[r + 1] -= 1;
    }
    for(int i = 1 ; i <= n ; i++)
    freq[i] += freq[i-1];

    sort(all(v));
    sort(all(freq));

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += v[i] * freq[i];
    }

    cout << sum;
    return 0;
}
