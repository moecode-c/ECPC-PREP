#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void sortnum(vector<ll>& v , int n) {
      bool has_even = false, has_odd = false;
      for (int i = 0; i < n; i++) {
          if (v[i] % 2 == 0) has_even = true;
          else has_odd = true;
      }

      if (has_even && has_odd) {
          sort(v.begin(), v.end());
      }
}

int main() {
    fast_io();

    int t;
    cin >> t;
    int n;

    while (t--) {
        cin >> n;
        vector<ll> v(n);

        for(int i = 0 ; i< n ; i++){
          cin >> v[i];
        }

        sortnum(v,n);

        for(int i = 0 ; i< n ; i++){
          cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
