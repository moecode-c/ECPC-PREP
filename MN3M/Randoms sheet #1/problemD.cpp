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

void solve() {
    // Write solution here
}

int32_t main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v2(n),v3(n);
        for(int i = 0 ; i < n ; i++){
            int num;
            cin >> num;
            if(num % 2 == 0) v2.push_back(num);
            else v3.push_back(num);
        }

        int count = 0;
        bool modu = false;

        //Not done

        int j = 0;
        for(int i = 0 ; i < v3.size() ; i++){
            if(j < v2.size() - 1){
                count += (v3[i]+v2[j])/2; 
                modu = !modu;
                if(modu)
                j++;
            }
            else{
                count += (v3[i]+v3[i+1])/2;
            }
        }
        
        

        cout << count << '\n';
    }

    return 0;
}
