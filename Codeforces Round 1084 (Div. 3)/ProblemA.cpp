#include <bits/stdc++.h>
#include <deque>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool issorted(deque<int> v , int n){
  for(int i = 0 ; i<n-1 ; i++){
    if(v[i] > v[i+1])
    return false;
  }

  return true;
}

void solve(deque<int> v , int n) {
    for(int i = 0 ; i < n ; i++){
        if(!issorted(v,n)){
            v.erase();
        }
    }
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> v(n);
        for(int i = 0 ; i < n;i++){
            cin >> v[i];
        }

        solve(v,n);
    }

    return 0;
}
