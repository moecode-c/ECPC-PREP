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

int32_t main()
{
    fast_io();

    int n;
    cin >> n;
    vector<long long> v(n+1),pre(n+1) , presort(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
        presort[i] = presort[i-1] + v[i];
    }
    
    sort(all(v));
    for(int i = 1 ; i <= n ; i++){
        presort[i] = presort[i-1] + v[i];
    }
    
    
    int m;
    cin >> m;

    while(m--){
        int type , l , r;
        cin >> type >> l >> r;

        if(type == 1){
            cout << pre[r] - pre[l-1] << endl;
        }
        else{
            cout << presort[r] - presort[l-1] << endl;
        }
    }

    
    return 0;
}
