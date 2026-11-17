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
int n;
const int N = 31650;
vector<int> spf(N , 0);
vector<int> primes;

void sieve(){
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            primes.push_back(i);
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }
}

void solve() {
    cin >> n;
    vector<int> f;
    int x = n;
    for (int p : primes) {
        if (p * p > x) break;
        while (x % p == 0) {
            f.push_back(p);
            x /= p;
        }
    }
    if (x > 1) f.push_back(x);

    if (f.size() < 3) {
        cout << "NO\n";
        return;
    }

    int a = f[0], b, i;
    if (f[1] == a) {
        b = f[1] * f[2];
        i = 3;
    }
    else {
        b = f[1];
        i = 2;
    }

    int c = 1;
    for (; i < f.size(); i++) c *= f[i];

    if (c > 1 && c != a && c != b) {
        cout << "YES\n" << a << " " << b << " " << c << "\n";
    }
    else {
        cout << "NO\n";
    }
}

int32_t main() {
    fast_io();

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}