#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fast_io();

    int t = 1;
    cin >> t;
    int n;

    string s,t1;
    while (t--) {
        cin >> n >> s >> t1;
        sort(s.begin(),s.end());
        sort(t1.begin(),t1.end());
        if(s==t1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
