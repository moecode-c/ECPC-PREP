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
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];
        int pl = 0,pr = n-1 , prsum = v[n-1] , plsum = v[0] , plnum = 1 , prnum = 1;
        while(pl < pr){
            if(prsum > plsum){
                pl++;
                plsum += v[pl];
            }
            else{
                pr--;
                prsum += v[pr];
            }
        }

        cout << prsum << "    " << plsum << "   ";
        int l = 0 , r = 1e18 , ans = -1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(mid * plsum * plnum == prsum * mid * prnum){
            ans = mid;
            break;
            }
            else if(mid * plsum * plnum < prsum * mid * prnum){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
