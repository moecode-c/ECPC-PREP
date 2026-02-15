#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> v1;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void issorted(int n) {
    for (int i = 1; i <= n; i += 2) {
        vector<ll> need;
        vector<ll> have;

        for (int j = i; j <= n; j *= 2) {
            need.push_back(j);
            have.push_back(v1[j - 1]);
        }

        sort(have.begin(), have.end());

        for (int j = 0; j < (int)need.size(); j++) {
            if (have[j] != need[j]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    fast_io();

    int t;
    int n;
    cin >> t;
    while (t--) {

        cin >> n;
        v1.resize(n);

        for(int i = 0 ; i< n ; i++){
            cin >> v1[i];
        }

        issorted(n);
        v1.clear();
    }

    return 0;
}
