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
        int sumn = 0;
        int allsum = n-1;
        int lastmaxnum = 0;
        int maxnum = -1e10;
        vector<int> b((n*(n-1))/2);
        for(auto &x : b) cin >> x;
        sort(all(b));
        for(int i = 0 ; i < ((n*(n-1))/2) ; i++){
            int num = b[i];
            maxnum = max(maxnum,num);
            sumn++;
            if(sumn == allsum){
                allsum--;
                cout << maxnum << " ";
                lastmaxnum = max(maxnum , lastmaxnum);
                maxnum = -1e10;
                sumn = 0;
            }
        }
        
        cout << lastmaxnum + 1 << '\n';
    }

    return 0;
}