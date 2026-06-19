#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fast_io();

    string s;
    cin >> s;

    unordered_map<char,int> m;
    for(int i = 0 ; i < s.length() ; i++){
        m[s[i]]++;
    }

    
    return 0;
}
