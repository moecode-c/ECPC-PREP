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

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1 , 0), pre(n + 1 , 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pre[i] = pre[i - 1] + v[i];
        }

        while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        cout << ((pre[n] - (pre[r] - pre[l-1]) + ((r-l+1) * k)) % 2 == 1? "YES" : "NO") << endl;
        }
    }

    return 0;
}
