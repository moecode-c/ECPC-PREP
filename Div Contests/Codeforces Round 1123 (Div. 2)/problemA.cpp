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
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        int l = 0 , r = s.length()-1 , coins = 0;
        while(l <= r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                if(s[l] == ch || s[r] == ch)
                coins++;
                else
                coins+=2; 

                l++;
                r--;
            }
        }

        cout << coins << '\n';
    }

    return 0;
}
