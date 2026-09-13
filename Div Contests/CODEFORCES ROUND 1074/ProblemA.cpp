#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int n) {
   for(int i = 1; i <= n ;i++){
    cout << i << " ";
   }
   cout << endl;
}

int main() {
    fast_io();

    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        solve(n);
    }

    return 0;
}
