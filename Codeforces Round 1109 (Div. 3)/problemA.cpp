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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int maxcount =0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '*'){
        count = 0;
        }
        else{
            count += 1;
            maxcount = max(maxcount , count);
        }
    }
    

    cout << ceil((double)maxcount/2.0) << endl;
}

int main()
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
