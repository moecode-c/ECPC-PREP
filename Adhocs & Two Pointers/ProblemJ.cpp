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

    vector<pair<char,int>> m;
    string ans = "QWERTYUIOPASDFGHJKLZXCVBNM";
    
    ll n = s.length();
    ll r = 0 , l = 0 , charsnum = 0;
    while(r < n){
        m[r].second++;

        if(m[r] == 1){
            charsnum++;
        }
        else{
            while (l < r && m[l] != 1) {
                m[l]--;
                l++;
            }
        }
        r++;
    }


    
    return 0;
}
