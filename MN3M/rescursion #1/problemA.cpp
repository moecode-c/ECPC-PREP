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

set<int> st;
int n;

void recur(int num){
    if(num > n) return;
    
    st.insert(num);
    recur(num * 10);
    recur(num * 10 + 1);
}

int32_t main() {
    fast_io();

    cin >> n;
    recur(1);

    cout << st.size() << "\n";
    return 0;
}