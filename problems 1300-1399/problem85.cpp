#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    int ans = 0;

    while (a != b) {

        if (a > b) {
            if (a % 2 == 0)
                a /= 2;
            else if (a % 3 == 0)
                a /= 3;
            else if (a % 5 == 0)
                a /= 5;
            else {
                cout << -1;
                return 0;
            }
            ans++;
        }
        else {
            if (b % 2 == 0)
                b /= 2;
            else if (b % 3 == 0)
                b /= 3;
            else if (b % 5 == 0)
                b /= 5;
            else {
                cout << -1;
                return 0;
            }
            ans++;
        }
    }

    cout << ans;
}