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
        int n;
        cin >> n;
        vector<int> v2,v3,v6,vno;
        int x;
        for(int i = 0 ; i < n ; i++){
            cin >> x;
            if(x % 6 == 0) v6.push_back(x);
            else if(x % 3 == 0) v3.push_back(x);
            else if(x % 2 == 0) v2.push_back(x);
            else vno.push_back(x);
        }

        for (auto i : v6) cout << i << " ";
        for (auto i : v2) cout << i << " ";
        for (auto i : vno) cout << i << " ";
        for (auto i : v3) cout << i << " ";
    }

    return 0;
}
