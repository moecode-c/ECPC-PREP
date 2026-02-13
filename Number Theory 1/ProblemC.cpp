#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int n) {
    for(int i = 2 ; i * i <= n ; i++){
        while(n % i == 0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n > 1)
    cout << n;
}

int main() {
    fast_io();

   int n;
   cin>> n;
   solve(n);
}
