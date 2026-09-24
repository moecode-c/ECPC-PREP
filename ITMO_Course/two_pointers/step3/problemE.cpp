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

    int n , s;
    cin >> n >> s;
    vector<int> weights(n),costs(n);
    for(int i = 0 ; i < n ; i++) cin >> weights[i];
    for(int i = 0 ; i < n ; i++) cin >> costs[i];

    int l = 0 , r = 0 , sumweights = 0 , maxcost = 0 , currcost = 0;
    while(r < n){
        sumweights += weights[r];
        currcost += costs[r];

        while (sumweights > s)
        {
            sumweights -= weights[l];
            currcost -= costs[l];
            l++;
        }
        
        maxcost = max(maxcost , currcost);
        r++;
    }

    cout << maxcost;
    return 0;
}
