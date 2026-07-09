#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fast_io();

    int n , a , b;
    cin >> n >> a >> b;

    cout << n - (a+b);

    return 0;
}
