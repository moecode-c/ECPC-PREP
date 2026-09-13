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
    unordered_map<string,int> mp;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;

        if(mp.count(s)){
            cout << s << mp[s] << '\n';
        }
        else{
            cout << "OK" << '\n';
        }

        mp[s]++;
    }

    return 0;
}
