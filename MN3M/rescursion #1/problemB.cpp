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
deque<int> luckynums;

void prem(int numdig,int num ,int digit) {
    if(digit == numdig + 1){
        return;
    }

    if(digit > 0)
    luckynums.push_back(num);


    prem(numdig,num * 10 + 4 , digit+1);
    prem(numdig,num * 10 + 7 , digit+1);

}

int32_t main() {
    fast_io();

    int l , r;
    cin >> l >> r;

    prem(10,0,0);
    sort(all(luckynums));

    int sumr = 0;
    int suml = 0;
    int prev = 0;
    for(int i = 0 ; i < luckynums.size() ; i++){
        if(prev >= r) break;
        sumr += luckynums[i] * (min(r , luckynums[i]) - prev);
        if(prev < l - 1) suml += luckynums[i] * (min(l - 1 , luckynums[i]) - prev);
        prev = luckynums[i];
    }

    cout << sumr - suml;

    return 0;
}
