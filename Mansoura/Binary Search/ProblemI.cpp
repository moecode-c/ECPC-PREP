#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    ll x;
    cin >> x;
    ll l = 0 , r = 1e18; 
    
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(mid * mid == x)
        {
            cout << "YES";
            return 0;
        }
        else if(mid > x)
        r = mid - 1;
        else
        l = mid + 1;
    }

    cout << "NO";
    return 0;
}
