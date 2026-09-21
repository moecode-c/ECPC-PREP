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
int n , k , a , b;

int cost(int x) {
    if(x == 1) return 0;
    if(x < k) return (x - 1) * a;
    if(x % k != 0) return (x % k) * a + cost(x - x % k);
    return min(b , (x - x / k) * a) + cost(x / k);
}

int32_t main() {
    fast_io();

    cin >> n >> k >> a >> b;

    if(k == 1) cout << (n - 1) * a;
    else cout << cost(n);

    return 0;
}
