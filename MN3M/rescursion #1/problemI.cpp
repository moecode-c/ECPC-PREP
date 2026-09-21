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
int n , l , r , x;
vector<int> dif;

int prosets(int ind, int minnum , int maxnum , int numele, int sum) {
    if(ind == n){
        if(sum >= l && sum <= r && numele >= 2 && (maxnum - minnum) >= x)
            return 1;
        return 0;
    }

    int ch1 = prosets(ind + 1 , minnum , maxnum , numele, sum);

    int newmin = min(minnum , dif[ind]);
    int newmax = max(maxnum , dif[ind]);
    int ch2 = prosets(ind + 1 , newmin , newmax , numele + 1, sum + dif[ind]);

    return ch1 + ch2;
}

int32_t main() {
    fast_io();

    cin >> n >> l >> r >> x;
    dif.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> dif[i];

    cout << prosets(0, (int)1e18, 0, 0, 0);
    return 0;
}