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
int n , k;
vector<int> v;

void solve() {
    int p = n - k + 1;
    vector<pair<int,int>> vimp;
    for(int i = 0 ; i < p ; i++)
    {
        vimp.push_back({v[i],i});
    }
    sort(all(vimp));

    int m = p;
    for(int i = 0 ; i < p ; i++){
        if(vimp[i].first != i){
            m = i;
            break;
        }
    }

    if(m == p){
        cout << -1 << '\n';
        return;
    }

    int firstind = vimp.back().second;
    int secondind = 0;
    for(int i = p ; i < n ; i++){
        if(v[i] == m){
            secondind = i;
            break;
        }
    }

    cout << firstind + 1 << ' ' << secondind + 1 << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        v.assign(n,0);
        for(int &i : v) cin >> i;

        solve();
    }

    return 0;
}