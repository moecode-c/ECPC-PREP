#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    // Write solution here
}

int main()
{
    fast_io();

    int si, n;
    cin >> si >> n;
    map<int, int> m;
    for(int i = 0 ; i < n ; i++){
        int dragexp , bonexp;
        cin >> dragexp >> bonexp;
        m[dragexp] += bonexp;
    }

    bool can = true;
    for(auto i : m){
        if(si > i.first){
            si += i.second;
        }
        else{
            can = false;
        }
    }

    cout << ((can == true)? "YES" : "NO");

    return 0;
}
