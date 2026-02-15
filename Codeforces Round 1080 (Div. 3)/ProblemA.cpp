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
    fast_io();

    int t;
    cin >> t;
    int n;
    int arr[5];
    while (t--) {
        cin >> n;
        for(int i = 0 ; i <n ; i++){
            cin >> arr[i];
        }

        bool real67 = false;
        
        // Check if 67 exists (can select it alone)
        for(int i = 0; i < n; i++) {
            if(arr[i] == 67) {
                real67 = true;
                break;
            }
        }
        
        // Check pairs: 1 * 67
        if(!real67) {
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    if(i != j && arr[i] * arr[j] == 67){
                        real67 = true;
                        break;
                    }
                }
            }
        }

        if(!real67) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
