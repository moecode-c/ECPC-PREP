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

int32_t main(){
    fast_io();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        const int BITS = 30;
        vector<int> cnt(BITS, 0);
        for(int i = 0; i < n; i++)
            for(int b = 0; b < BITS; b++)
                if(a[i] & (1LL << b)) cnt[b]++;

        long long best = 0;
        for(int i = 0; i < n; i++){
            long long total = 0;
            for(int b = 0; b < BITS; b++){
                bool bitSet = (a[i] >> b) & 1LL;
                long long disagree = bitSet ? (n - cnt[b]) : cnt[b];
                total += disagree * (1LL << b);
            }
            best = max(best, total);
        }

        cout << best << "\n";
    }
    return 0;
}