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

int n, m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> par;
vector<int> cycle;

bool dfs(int node, int parent) {
    vis[node] = true;
    par[node] = parent;

    for(int u : adj[node]) {
        if(u == parent)
            continue;

        if(!vis[u]) {
            if(dfs(u, node))
                return true;
        }
        else {
            cycle.push_back(u);

            int cur = node;

            while(cur != u) {
                cycle.push_back(cur);
                cur = par[cur];
            }

            cycle.push_back(u);

            return true;
        }
    }

    return false;
}
 
int32_t main() {
    fast_io();
 
    cin >> n >> m;

    adj.resize(n + 1);
    vis.assign(n + 1, false);
    par.assign(n + 1, -1);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            if(dfs(i, -1))
                break;
        }
    }

    if(cycle.empty()) {
        cout << "IMPOSSIBLE\n";
    }
    else {
        cout << cycle.size() << '\n';

        for(int x : cycle)
            cout << x << " ";

        cout << '\n';
    }

    return 0;
}