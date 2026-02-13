#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int MAXN = 1000001;
int spf[MAXN]; // smallest prime factor

void sieve() {
    for (int i = 1; i < MAXN; i++) spf[i] = i;
    
    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j < MAXN; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

void solve(int n)
{
    while (n > 1) {
        cout << spf[n] << " ";
        n /= spf[n];
    }
    cout << "\n";
}

int main()
{
    fast_io();
    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        solve(q);
    }

    return 0;
}
