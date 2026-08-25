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

    int n, q;
    cin >> n >> q;
    vector<long long> v(n+1),pre(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
    }

    while(q--){
        int a,b;
        cin >> a >> b;

        cout << pre[b] - pre[a-1] << endl;
    }

    return 0;
}
