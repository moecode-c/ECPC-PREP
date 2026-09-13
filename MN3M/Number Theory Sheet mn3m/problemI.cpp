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
    vector<int> v;
    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i * i != n){
                v.push_back(n/i);
            }
        }
    }
    sort(all(v));

    if(v.size() < k)
    cout << -1;
    else
    cout << v[k-1];

    return 0;
}
