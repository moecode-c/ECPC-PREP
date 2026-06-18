#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fast_io();

    int n , x;
    cin >> n >> x;

    int l = 0 , r = n-1;
    vector<pair<ll,int>> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >>v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(),v.end());

    while(l < r){
      
        if(v[l].first + v[r].first < x) l++;
        else if(v[l].first + v[r].first > x) r--;
        else{
            cout << v[l].second << " " << v[r].second;
            return;
        }
    }

    cout << "IMPOSSIBLE";

}
