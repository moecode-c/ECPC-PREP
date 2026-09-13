#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    ll sum = 0;

    // First window
    for (int i = 0; i < k; i++)
        sum += h[i];

    ll mn = sum;
    int ans = 0;

    // Slide the window
    for (int i = k; i < n; i++) {
        sum += h[i];       // Add new element
        sum -= h[i - k];   // Remove old element

        if (sum < mn) {
            mn = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1 << '\n';

    return 0;
}