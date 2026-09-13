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

    const int LIMIT = 150000;
    vector<bool> is_prime(LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    sieve(is_prime, LIMIT);

    // Store all primes in a vector
    vector<int> primes;
    for (int i = 2; i <= LIMIT; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        cout << primes[n - 1] << "\n";
    }

    return 0;
}
