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
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> v(n+2);
        for(int i = 1 ; i <= n ; i++) v[i] = s[i-1];
        v[n+1] = '2';
        bool can = true;
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            if(i % k == 0){
                if(v[i] == '0')
                can = false;
                
                if(can)
                count++;

                if(v[i+1] == '0')
                can =false;
                else if(v[i+1] == '1')
                can =true;
            }
            else if(v[i] == '0')
            can = false;
        }

        cout << count << '\n';
    }

    return 0;
}
