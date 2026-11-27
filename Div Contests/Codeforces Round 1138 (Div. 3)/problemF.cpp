#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n, m;
vector<vector<pair<int,int>>> adj;
vector<int> pink, black;
vector<bool> vis, invalid;
bool can;

void remove()
{
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(pink[i] == 0 || black[i] == 0){
            invalid[i] = true;
            q.push(i);
        }
    }

    while(!q.empty()){
        int pnode = q.front();
        q.pop();

        for(auto [cnode, ccolor] : adj[pnode]){
            if(invalid[cnode]){
                continue;
            }
            if(ccolor == 1){
                pink[cnode]--;
            }
            else{
                black[cnode]--;
            }
            if(pink[cnode] == 0 || black[cnode] == 0){
                invalid[cnode] = true;
                q.push(cnode);
            }
        }
    }
}

void bfs(int node)
{
    queue<int> q;
    vis[node] = true;
    q.push(node);

    while(!q.empty()){
        int pnode = q.front();
        q.pop();

        if(!invalid[pnode]){
            can = true;
        }

        for(auto [cnode, ccolor] : adj[pnode]){
            if(!vis[cnode]){
                vis[cnode] = true;
                q.push(cnode);
            }
        }
    }
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        adj.assign(n+1, {});
        pink.assign(n+1, 0);
        black.assign(n+1, 0);
        vis.assign(n+1, false);
        invalid.assign(n+1, false);
        for (int i = 1; i <= m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
            if(c == 1){
                pink[a]++;
                pink[b]++;
            }
            else{
                black[a]++;
                black[b]++;
            }
        }

        remove();

        int count = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                can = false;
                bfs(i);
                if(can){
                    count++;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}
