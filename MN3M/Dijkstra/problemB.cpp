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
int n , m;
vector<vector<pair<int,int>>> adj;
vector<int> dist , par;


void dijkstra() {
    priority_queue<pair<int,int>,
                    vector<pair<int,int>>,
                    greater<pair<int,int>>> pq;
    
    pq.push({0,1});
    dist[1] = 0;

    while(!pq.empty()){
        auto [pw , pnode] = pq.top();
        pq.pop();

        if(pw > dist[pnode]) continue;

        for(auto [cw , cnode] : adj[pnode]){
            if(cw + pw < dist[cnode]){
                dist[cnode] = cw + pw;
                pq.push({(cw+pw),cnode});
                par[cnode] = pnode;
            }
        }
    }
}

int32_t main() {
    fast_io();

    cin >> n >> m;
    adj.assign(n+1,{});
    for(int i = 1 ; i <= m ; i++){
        int a , b ,c ;
        cin >> a >> b >> c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }
    dist.assign(n+1,1e18);
    par.assign(n+1,-1);
    dijkstra();

    if(dist[n] == 1e18){
        cout << -1;
    }
    else{
        int cur = n;
        stack<int> st;
        while(cur != -1){
            st.push(cur);
            cur = par[cur];
        }
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    return 0;
}
