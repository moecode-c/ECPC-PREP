#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

const int MAXV = 1000001;
vector<int> spf(MAXV);

void sieve() {
    for (int i = 2; i < MAXV; i++) {
        if (spf[i] == 0) {
            for (int j = i; j < MAXV; j += i)
                if (spf[j] == 0)
                    spf[j] = i;
        }
    }
}

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int32_t main() {
    fast_io();
    sieve();

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int count = 1;
        while (x > 1) {
            int p = spf[x];
            int cnt = 0;
            while (x % p == 0) { x /= p; cnt++; }
            count *= (cnt + 1);
        }

        cout << count << "\n";
    }

    return 0;
}