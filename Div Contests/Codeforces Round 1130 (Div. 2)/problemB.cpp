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
vector<vector<char>> frogs;
int n;

void solve() {
    int cnt = 0;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < n ; j++){
            if(frogs[i][j] == 'f')
                cnt++;
        }
    }
    cout << cnt % 2 << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        frogs.assign(2,vector<char>(n,'o'));
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> frogs[i][j];
            }
        }

        solve();
    }

    return 0;
}