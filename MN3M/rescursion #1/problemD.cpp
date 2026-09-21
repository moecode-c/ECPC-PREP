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

    int count = 0;
    while(n > 0){
        if(n % 10 == 4 || n % 10 == 7) count++;
        n /= 10;
    }

    if(count == 0){
        cout << "NO";
        return 0;
    }

    while(count > 0){
        if(count % 10 != 4 && count % 10 != 7){
            cout << "NO";
            return 0;
        }
        count /= 10;
    }

    cout << "YES";
    return 0;
}