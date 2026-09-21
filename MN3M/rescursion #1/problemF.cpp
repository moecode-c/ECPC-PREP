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

    int n;
    cin >> n;

    int temp = n;
    int count = 0;
    while(temp > 0){
        count++;
        temp/=10;
    }

    prem(count,0,0);
    sort(all(luckynums));
    for(int i = 0 ; i < luckynums.size() ; i++){
        if(luckynums[i] == n){
        cout << i + 1;
        break;
        }
    }

    return 0;
}
