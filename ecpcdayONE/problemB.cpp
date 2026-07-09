#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin>>n>>m;

         for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
         }
            if(m<n-1){
                cout<<-1;
            }
            long long totalcost=0;
            int i=1,j=2;
            for(int step=1;step<=m;step++){
                totalcost+=(i+j);
                j++;

                if(j>n){
                    i++;
                    j=i+1;
                }
            }
            cout<<totalcost;


         }
    }

  
