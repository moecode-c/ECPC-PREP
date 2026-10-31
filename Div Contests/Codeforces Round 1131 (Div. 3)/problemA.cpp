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
    int psz, qsz;
    cin >> psz >> qsz;
    string p, q;
    cin >> p >> q;
    unordered_map<char, int> mp;
    for (int i = 0; i < psz; i++) mp[p[i]]++;
    for (int i = 0; i < qsz; i++) mp[q[i]]--;
    mp['s']--;
    mp['i']--;
    mp['x']--;

    for (auto i : mp)
    {
        if (i.second != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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
