#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    if (n <= 2)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';

    vector<bool> prime(n + 2, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i)
                prime[j] = false;
        }
    }

    for (int i = 2; i <= n + 1; i++) {
        cout << (prime[i] ? 1 : 2) << ' ';
    }
}