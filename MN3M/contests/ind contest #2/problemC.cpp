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
    bool alleven2 = true , allodd2 = true , alleven1 = true, allodd1 = true;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        if(num % 2 == 0){
            if(i % 2 == 0){
                allodd2 = false;
            }
            else{
                allodd1 = false;
            }
        }
        else{
            if(i % 2 == 0){
                alleven2 = false;
            }
            else{
                alleven1 = false;
            }
        }
        
    }
    if(!alleven1 and !allodd1 or !alleven2 and !allodd2){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
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
