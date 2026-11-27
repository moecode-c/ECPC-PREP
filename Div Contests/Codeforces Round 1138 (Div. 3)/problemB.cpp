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
    int n , k , p;
    cin >> n >> k >> p;
    vector<int> fruit(n + 1,0);
    for(int i = 1 ; i <= n ; i++)
    cin >> fruit[i];

    sort(all(fruit));

    int sum = 0;
    int maxsum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += fruit[i];
        if(i % k == 0){
            maxsum += max(sum,p);
            sum = 0;
        }
    }
    maxsum += sum;

    cout << maxsum << '\n';
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
