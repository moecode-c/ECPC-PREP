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

    int n , m , k;
    cin >> n >> m >> k;
    vector<int> v(n+2) , diffv(n+2 , 0);
    vector<vector<int>> diffop(m+2 , vector<int> (4));
    vector<int> diffqu(m+2);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];

    for(int i = 1 ; i <= m ; i++){
        cin >> diffop[i][1] >> diffop[i][2] >> diffop[i][3];
    } 

    for(int i = 1 ; i <= k ; i++){
        int a , b;
        cin >> a >> b;
        diffqu[a] += 1;
        diffqu[b + 1] -= 1;
    } 

    for(int i = 1 ; i <= m ; i++){
        diffqu[i] += diffqu[i-1];
    }

    for(int i = 1 ; i <= m ; i++){
        diffv[diffop[i][1]] += diffop[i][3] * diffqu[i];
        diffv[diffop[i][2] + 1] -= diffop[i][3] * diffqu[i];
    }     

    for(int i = 1 ; i <= n ; i++){
        diffv[i] += diffv[i-1];
    }

    for(int i = 1 ; i <= n ; i++){
        v[i] += diffv[i];
        cout << v[i] << " ";
    }


    return 0;
}
