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
    vector<int> v(n);
    deque<int> left, right;

    if (n == 1)
    {
        int num;
        cin >> num;
        cout << 1 << '\n' << num << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && v[i] == v[i - 1])
        {
            right.push_back(v[i]);
        }
        else
        {
            left.push_back(v[i]);
        }
    }
    sort(all(left));
    sort(right.rbegin(), right.rend());

    int k = left.size();
    for (int i = 0; i < right.size(); i++)
    {
        if (i == 0 || right[i] != right[i - 1])
            k++;
    }

    cout << k << '\n';
    for (auto i : left)
    {
        cout << i << " ";
    }
    for (auto i : right)
    {
        cout << i << " ";
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