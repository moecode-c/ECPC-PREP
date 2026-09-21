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

void prem(int numdig,int num ,int digit,int num4 , int num7) {
    if(digit == numdig + 3){
        return;
    }

    if(num4 == num7)
    luckynums.push_back(num);
    
    
    prem(numdig,num * 10 + 4 , digit+1 , num4+1 , num7);
    prem(numdig,num * 10 + 7 , digit+1 , num4 , num7+1);
    
}

int32_t main() {
    fast_io();

    int n;
    cin >> n;

    int temp = n;
    int count = 0;
    while(temp > 0){
        count++;
        temp/=10;
    }

    prem(count,0,0,0,0);
    luckynums.push_back(n);
    sort(all(luckynums));
    for(int i = 0 ; i < luckynums.size() ; i++){
        if(luckynums[i] == n){
        cout << luckynums[i+1];
        break;
        }
    }

    return 0;
}
