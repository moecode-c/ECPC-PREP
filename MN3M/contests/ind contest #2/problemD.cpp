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

void solve() {
    int n;
    cin >> n;
    vector<int> nums;
    int dig = 0;
    while(n > 0){
        int curnum = n % 10;
        if(curnum != 0){
            nums.push_back(curnum * pow(10,dig));
        }
        dig++; 
        n/=10;
    }

    cout << nums.size() <<'\n';
    for(auto i : nums){
        cout << i << " ";
    }
    cout << '\n';
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
