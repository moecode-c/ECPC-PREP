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

int32_t main() {
    fast_io();

    int n;
    cin >> n;

    bool found = false;

    for(int a = 0; a * 1234567 <= n && !found; a++){
        int remA = n - a * 1234567;
        for(int b = 0; b * 123456 <= remA && !found; b++){
            int remB = remA - b * 123456;
            if(remB % 1234 == 0){
                found = true;
            }
        }
    }

    cout << (found ? "YES" : "NO");
    return 0;
}