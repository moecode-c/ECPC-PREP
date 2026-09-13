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
 
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> ans(n + 1);
    vector<bool> visited(100001, false);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int distinct = 0;

    for (int i = n; i >= 1; i--) {
        if (!visited[a[i]]) {
            visited[a[i]] = true;
            distinct++;
        }

        ans[i] = distinct;
    }

    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << '\n';
    }

    return 0; 
}