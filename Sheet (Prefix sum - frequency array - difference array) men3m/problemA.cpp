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
    string s;
    cin >> s;
    
    unordered_map<char,int> m;
    for (char &c : s) {
        c = tolower(c);
    }
    for(int i = 0 ; i < n ; i++){
        m[s[i]]++;
    }
    string alphab = "qwertyuiopasdfghjklzxcvbnm";
    for(int i = 0 ; i < alphab.length() ; i++){
        if(m[alphab[i]] == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
