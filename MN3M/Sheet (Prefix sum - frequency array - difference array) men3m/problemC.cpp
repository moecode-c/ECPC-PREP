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

    int n;
    cin >> n;
    vector<bool> vis(n+1, false);
    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++){
        v[i] = i;
    }

    int j = n;
    int num;
    for(int i = n ; i >= 1 ; i--){
        cin >> num;
        vis[num] = true;

        while(vis[v[j]]){
            cout << v[j] << " ";
            j--;
        }
    
        cout << endl;
    }


    


    return 0;
}
