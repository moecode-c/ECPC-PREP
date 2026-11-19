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

vector<int> primes;

void sieve() {
    const int N = 31623;
    vector<bool> comp(N + 1, false);
    for (int i = 3; i <= N; i += 2) {
        if (!comp[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= N; j += i) comp[j] = true;
        }
    }
}

int32_t main() {
    fast_io();
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) { cout << "FastestFinger\n"; continue; }
        if (n % 2 == 1) { cout << "Ashishgup\n"; continue; }

        int x = n, a = 0, cnt = 0;
        while (x % 2 == 0) { x /= 2; a++; }

        for (int p : primes) {
            if (p * p > x) break;
            while (x % p == 0) { x /= p; cnt++; }
        }
        if (x > 1) cnt++;

        bool first;
        if (cnt == 0) first = (n == 2);
        else if (a == 1 && cnt == 1) first = false;
        else first = true;
        
        cout << (first ? "Ashishgup" : "FastestFinger") << "\n";
    }
    return 0;
}