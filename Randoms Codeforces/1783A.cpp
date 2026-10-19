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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(all(a));
        if (a[0] == a[n - 1])
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        cout << a[n - 1] << " " << a[0] << " ";   
        for (int i = 1; i < n - 1; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}