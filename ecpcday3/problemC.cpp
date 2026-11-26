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

    int n , m;
    cin >> n >> m;

    vector<int> v(n + 1);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
    }

    deque<int> walls(m);
    for(int i = 0 ; i < m ; i++){
        cin >> walls[i];
    }

    set<int> s1,s2,s3;
    int sum = 0;
    int maxsave = 0;
    int i = 1 , j = 1 , curwall;
    while(j <= n){
        if(!walls.empty()){
        curwall = walls.front();
        walls.pop_front();
        }
        
        while(i <= curwall){
            s1.insert(v[i]);
            s3.insert(v[i]);
            i++;
        }
        j = curwall + 1;
        if(walls.empty()){
            while(j <= n){
                s2.insert(v[j]);
                s3.insert(v[j]);
                j++;
            }
        }
        else{
            while(j <= walls.front()){
                s2.insert(v[j]);
                s3.insert(v[j]);
                j++;
            }
        }

        sum += s1.size();
        if(j == n + 1)
        sum += s2.size();
        //cout << (s1.size() + s2.size() - s3.size()) << "\n";
        maxsave = max(maxsave , (int)(s1.size() + s2.size() - s3.size()));
        s1.clear();
        s2.clear();
        s3.clear();
    }

    cout << sum - maxsave;
    return 0;
}
