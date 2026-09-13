#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIMIT = 100000000;
    vector<bool> is_prime(LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    // Sieve of Eratosthenes
    for (int i = 2; i * i <= LIMIT; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    // Output primes at positions 1, 101, 201, 301, ...
    int count = 0;
    for (int i = 2; i <= LIMIT; i++) {
        if (is_prime[i]) {
            count++;
            if (count % 100 == 1) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}
