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

    int n , k;
    cin >> n >> k;
    unordered_map<int,int> mp;
    int maxnum = 0;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        mp[num]++;
        maxnum = max(maxnum,mp[num]);
    }
    int count = 0;
    for(auto i : mp){
        if(maxnum == i.second + 1 || maxnum == i.second)
        count++;
    }

    cout << count;


    return 0;
}
