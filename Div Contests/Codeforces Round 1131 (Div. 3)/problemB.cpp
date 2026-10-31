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

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int maxnum = max({x,y,z});
    int sum = x + y + z;

    if(maxnum == z){
        for(int i = 1 ; i <= sum ; i++) cout << "S";
    }
    else if(maxnum == x){
        for(int i = 1 ; i <= sum ; i++) cout << "P";
    }
    else{
        for(int i = 1 ; i <= sum ; i++) cout << "R";
    }
    cout << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
