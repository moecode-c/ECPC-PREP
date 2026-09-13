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

    int n;
    cin >> n;
    vector<int> v2,v3;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }

    for(int i = 1 ; i<=n ; i++){
        if(i % 2 == 0) v2.push_back(i);
        else v3.push_back(i);
    }

    for(int i : v2) cout << i << " ";
    for(int i : v3) cout << i << " ";

    return 0;
}
