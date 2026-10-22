#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()
 
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int32_t main(){
    fast_io();
    
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int charAcount = 0;
        int charBcount = 0;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'A'){
                charAcount++;
            }
            else{
                charBcount++;
            }
        }

        cout << (charAcount > charBcount? 'A':'B') << '\n';
    }

    return 0;
}