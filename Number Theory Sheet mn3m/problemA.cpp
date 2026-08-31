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


int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int count = 0;
        for(int i = 1 ; i * i <= x ;i++){
            if(x % i == 0){
            count++;

            if(i * i != x)
            count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
