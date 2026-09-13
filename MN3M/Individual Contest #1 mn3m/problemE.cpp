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

    int t;
    cin >> t;
    while (t--) {
        int ct, ch, cu;
        cin >> ct >> ch >> cu;

        int count = 3 * (ct + ch + cu);

        do {
            if (cu > 0) {
                if (ct > 0 && ct >= cu) {
                    count -= 2 * cu;
                    ct -= cu;
                    cu = 0;
                }
                else if (ct > 0 && ct < cu) {
                    count -= 2 * ct;
                    cu -= ct;
                    ct = 0;
                }
                else {
                    cu = 0;
                }
            }

            if (ch > 0) {
                if (ct > 0 && ct >= 2 * ch) {
                    count -= 2 * ch;
                    ct -= 2 * ch;
                    ch = 0;
                }
                else if (ct > 0 && ct < 2 * ch) {
                    count -= ct;
                    ch = 0;
                    ct = 0;
                }
                else {
                    ch = 0;
                }
            }

            if (ct > 0) {
                count -= (ct - 1);
                ct = 0;
            }

        } while (ct != 0 && cu != 0 && ch != 0);

        cout << count << "\n";
    }

    return 0;
}