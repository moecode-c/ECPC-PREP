#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll n, m;
vector<ll> worms, juicy, prefix;

void solve()
{
    // Write solution here
}

int main()
{
    fast_io();

    cin >> n;
    worms.assign(n + 1, 0);
    prefix.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> worms[i];
        prefix[i] = prefix[i - 1] + worms[i];
    }

    cin >> m;
    juicy.assign(m + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        cin >> juicy[i];
    }

    for (int i = 1; i <= m; i++)
    {
        auto pos = lower_bound(prefix.begin() + 1, prefix.end(), juicy[i]) - (prefix.begin() + 1);
        cout << pos + 1 << endl;
    }

    return 0;
}
