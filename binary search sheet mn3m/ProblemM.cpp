#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).rbegin(), (x).rend()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n , k;
vector<ll> v;

bool can(ll mid) {
    ll tempk = k;
    for(int i = 0 ; i <= (n/2) ; i++){
        if(v[i] < mid)
        tempk -= (mid - v[i]);

        if(tempk < 0)
        return false;
    }

    return true;
}

int main() {
    fast_io();

    cin >> n >> k;
    v.assign(n,0);
    ll maxnum = 0;
    for(int i = 0 ; i < n ; i++)  cin >> v[i];

    sort(all(v));

    ll l = 0 , r = 4e18 , ans =0;

    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(can(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
