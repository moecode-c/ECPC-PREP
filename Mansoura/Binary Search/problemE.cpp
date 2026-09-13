#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    int n, q;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
        sort(all(v));

    cin >> q;
    int m;
    while (q--)
    {
        cin >> m;
        int numdays = upper_bound(all(v),m) - v.begin();
        cout << numdays << endl;
    }

    return 0;
}
