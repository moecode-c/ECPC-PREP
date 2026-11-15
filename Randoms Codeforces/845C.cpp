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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v));

    int end1 = -1, end2 = -1;

    for (auto &[l, r] : v)
    {
        if (end1 < l)
            end1 = r;
        else if (end2 < l)
            end2 = r;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}