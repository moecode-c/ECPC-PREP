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
        vector<int> v(n);
 
        for(int &i : v) cin >> i;
        sort(all(v));

        bool can = false;
        for(int i = 0 ; i < n - 1; i++){
            if(v[i] == v[i+1]){
                can = true;
                break;
            }
        }

        if(can){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}