#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

const int maxN = 200005; 
ll resetarr[maxN];
ll arr[maxN];
int version[maxN];
int currentver = 0;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {

    int t;
    cin >> t;
    // n -> length of array
    // m -> num of operations
    // h -> max value computer can store
    ll n, m , h;
    while (t--) {
        cin >> n >> m >> h;
        

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            resetarr[i] = arr[i];
            version[i] = 0;
        }

      
        //operation is A.Bi = A.Bi + Ci
        ll Bi,Ci;
       
        for(int i = 0 ; i < m ; i++){
           cin >> Bi >> Ci;

           ll arrelement = ((version[Bi-1] == currentver)?  arr[Bi-1] : resetarr[Bi-1]);

           if((Ci + arrelement) > h){
                currentver+=1;
           }
           else{
            arr[Bi - 1] = Ci + arrelement;
            version[Bi - 1] = currentver;
           }
        }


        for(int i = 0 ; i < n ; i++){
        cout <<  ((version[i] == currentver)? arr[i] : resetarr[i]) << " ";
        }
        cout << endl;
    }

    return 0;
}
