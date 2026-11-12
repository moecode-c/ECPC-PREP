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
    string s;
    cin >> s;
    char intchar = 'r';

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'B' and intchar == 'r'){
            count++;
        }
        else if(s[i] == 'R' and intchar == 'b'){
            count++;
        }
        else{
            if(s[i] == 'R')
            intchar = 'b';
            else
            intchar = 'r';
        }
    }

    cout << count << '\n';
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
