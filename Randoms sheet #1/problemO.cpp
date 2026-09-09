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

int32_t main()
{
    fast_io();

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;

    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    int count = 0;
    for(int i = 0  ; i < n ; i++)
    count += mp[b[c[i] - 1]];

    cout << count;
    return 0;
}
