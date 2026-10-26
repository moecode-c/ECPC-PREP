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
vector<int> v;
int n, contrastA;

void solve()
{
    vector<int> w;
    for (int x : v)
        if (w.empty() or w.back() != x)
            w.push_back(x);

    int size = 2;
    for (int i = 1; i < (int)w.size() - 1; i++)
    {
        if ((w[i] > w[i - 1]) != (w[i + 1] > w[i]))
            size++;
    }

    cout << size << '\n';
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        v.assign(n, 0);
        contrastA = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
            
        for (int i = 0; i < n - 1; i++)
            contrastA += abs(v[i] - v[i + 1]);

        if (n > 1 and contrastA != 0)
            solve();
        else
            cout << 1 << '\n';
    }

    return 0;
}