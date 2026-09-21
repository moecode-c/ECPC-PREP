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

int n;
vector<int> a;

bool rot(int i, int cur) {
    if(i == n) return cur % 360 == 0;

    int ch1 = rot(i + 1, cur + a[i]);
    int ch2 = rot(i + 1, cur - a[i]);

    return ch1 || ch2;
}

int32_t main() {
    fast_io();

    cin >> n ;
    a.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    if(rot(0,0)) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}