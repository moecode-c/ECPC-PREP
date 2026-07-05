#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int freq[24][60];

int main() {
    fast_io();

    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        int u , v;
        cin >> u >> v;
        freq[u][v] +=1;
    }

    int maxnum = 0;
    for(int i = 0 ; i < 24 ; i++){
        for(int j = 0 ; j < 60 ; j++){
            if(maxnum < freq[i][j])
            maxnum = freq[i][j];
        }
    }

    cout << maxnum;
    return 0;
}
