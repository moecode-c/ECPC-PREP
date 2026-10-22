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

int32_t main(){
    fast_io();

    int s , n;
    cin >> s >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v));

    for(int i = 0 ; i < n ; i++){
        if(s > v[i].first)
        s += v[i].second;
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}