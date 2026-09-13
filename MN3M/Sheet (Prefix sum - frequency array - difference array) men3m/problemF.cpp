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

    int n, k;
    cin >> n >> k;

    vector<int> v(n+1) , pre(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
    }

    int minnum = 2e9;
    int ind = 0;
    for(int i = k ; i <=n ; i++){
        if(minnum > pre[i] - pre[i-k]){
        minnum = pre[i] - pre[i-k];
        ind = i - k;
        }
    }

    cout << ind + 1;
    return 0;
}
