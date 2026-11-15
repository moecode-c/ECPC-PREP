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
    int n;
    cin >> n;
    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        string firststring = s;
        firststring[0] = 'x';

        string secondstring = s;
        secondstring[1] = 'x';

        mp[firststring]++;
        mp[secondstring]++;
        mp[s]++;
    }

    int sum = 0;
    for (auto i : mp)
    {
        int pairs = i.second * (i.second - 1) / 2;

        if (i.first[0] == 'x' || i.first[1] == 'x')
            sum += pairs;
        else
            sum -= 2 * pairs;
    }

    cout << sum << '\n';
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