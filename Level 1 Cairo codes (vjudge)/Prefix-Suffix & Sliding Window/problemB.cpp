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
    int n , k;
    cin >> n >> k;
    vector<int> v(n) , dis , good;
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(!mp.count(v[i])){
            dis.push_back(v[i]);
        }
        mp[v[i]]++;
    }
    sort(all(dis));

    for(auto i : dis){
        if(mp[i] >= k){
            good.push_back(i);
        }
    }
    int size = good.size();

    int l = 0 , bestl = -1 , bestr = -1;
    for(int r = 0 ; r < size ; r++){
        if(r > 0 and good[r] != good[r-1] + 1){
            l = r;
        }
        if(bestl == -1 or good[r] - good[l] > bestr - bestl){
            bestl = good[l];
            bestr = good[r];
        }
    }

    if(bestl == -1){
        cout << -1 << '\n';
    }
    else{
        cout << bestl << " " << bestr << '\n';
    }
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