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
        int n;
        cin >> n;
        string s;

        cin >> s;

        int count = 0;
        int consecutivethorns = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '@'){
            count++;
            consecutivethorns = 0;
            }
            else if(s[i] == '.')
            consecutivethorns = 0;
            else if(s[i] == '*')
            consecutivethorns++;

            if(consecutivethorns == 2)
            break;
        }

        cout << count << '\n';
    }

    return 0;
}