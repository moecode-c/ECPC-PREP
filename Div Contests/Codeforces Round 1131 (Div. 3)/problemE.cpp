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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    for(int i = 0 ; i < n - 1 ; i++){
        int minnum = 1e9;
        int maxnum = -1e9;
        if(v[i] < 0 && v[i+1] < 0){
            v[i] *= -1;
            v[i+1] *= -1;
            swap(v[i], v[i+1]);
        }
        else if(v[i] > 0 && v[i+1] < 0 && v[i] < v[i+1] * -1){
            v[i+1] *= -1;
            v[i] *= -1;
            swap(v[i] , v[i+1]);
        }
        else if(v[i] < 0 && v[i+1] > 0 && v[i] * -1 > v[i+1]){
            v[i+1] *= -1;
            v[i] *= -1;
            swap(v[i] , v[i+1]);
        }
    }

    int sum = 0;
    for(int i = 0 ; i < n ; i++) sum += v[i];

    cout << sum << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
