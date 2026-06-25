#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int root(int x){
    while(x % 2 == 0)
        x /= 2;
    return x;
}

int main() {
    fast_io();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> pos(n + 1);

        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            pos[x] = i;
        }

        bool ok = true;

        for(int x = 1; x <= n; x++){
            if(root(x) != root(pos[x])){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}