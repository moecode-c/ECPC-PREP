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

void solve() {

    // Write solution here

}

int32_t main() {

    fast_io();

    int n , rs;

    cin >> n >> rs;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];

    int l = 0, r = 0 , dis = 0 , count = 0;

    while (r < n) {

        while (l < r && v[r] - v[l] > rs) {
            l++;
        }

        count += l;

        r++;

    }

    cout << count;

    return 0;

}