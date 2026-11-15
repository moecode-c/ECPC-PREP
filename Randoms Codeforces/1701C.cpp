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

void solve() {
    int n , m;
    cin >> n >> m;
    vector<int> workerstime(n+1,0);
    vector<int> tasks(m+1,0);
    for(int i = 1 ; i <= m ; i++){
        cin >> tasks[i];
    }

    int i = 1 , sum = 0 , alltime = 1;
    while(i <= m){
        int j = 0;
        int maxnum = 0;
        while(j < n){
            if(workerstime[tasks[i]] != alltime)
            {
                maxnum = 1;
                workerstime[tasks[i]] = alltime;
            }
            else{
                maxnum = 2;
                j = n;
            }
            j++;
            i++;
        }
        sum += maxnum;
        alltime++;
    }

    cout << sum << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
