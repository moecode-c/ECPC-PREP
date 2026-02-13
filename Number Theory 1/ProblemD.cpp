#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void sieve(vector<bool> &primes, int n){
    for(int i = 2; i * i <= n; i++){
        if(primes[i]){
            for(int j = i * i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }
}

int main() {
    fast_io();

    const int MAXN = 100000000;
    vector<bool> primes(MAXN + 1, true);
    primes[0] = primes[1] = false;
    
    sieve(primes, MAXN);

    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        if(primes[n]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
