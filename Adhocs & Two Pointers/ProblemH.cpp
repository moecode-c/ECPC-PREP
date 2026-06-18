#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    // Write solution here
}

int main() {
    int n; cin >> n;
    vector <int> arr(n);
 
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    map <int,int> freq;
    int l = 0 , r = 0 , ans = -1;
    while (r < n) {
        freq[arr[r]]++;
        if(freq[arr[r]] == 1) {
            ans = max(ans , r - l + 1);
            r++;
        } else {
            while (l < r && freq[arr[r]] != 1) {
                freq[arr[l]]--;
                l++;
            }
            r++;
        }
    }
 
    cout << ans << '\n';

    

    return 0;
}
