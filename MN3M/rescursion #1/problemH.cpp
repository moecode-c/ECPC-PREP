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

    string s(n, 'o');

    int a = 1, b = 1;
    while(a <= n){
        s[a - 1] = 'O'; 
        int next = a + b;
        a = b;
        b = next;
    }

    cout << s;
    return 0;
}