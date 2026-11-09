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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<pair<int,int>> allv;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        int r = v[i] % k;
        if (r == 0)
            r = k;
        allv.push_back({r,i+1});
    }

    sort(allv.begin() , allv.end(), [](const pair<int,int> &a, const pair<int,int> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    });

    for (int i = 0; i < n; i++){
        cout << allv[i].second << " ";
    }

    cout << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}