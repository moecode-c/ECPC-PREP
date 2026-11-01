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
int n, q;
vector<int> v;
vector<int> stamp;
int allTime = -1;
int allVal = 0;

int32_t main()
{
    fast_io();

    cin >> n >> q;
    v.assign(n, 0);
    stamp.assign(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    int timer = 0;
    while (q--)
    {
        timer++;
        int quer;
        cin >> quer;
        if (quer == 1)
        {
            int a, b;
            cin >> a >> b;

            int cur;
            if (stamp[a - 1] > allTime)
                cur = v[a - 1];
            else
                cur = allVal;

            sum -= cur;
            sum += b;
            v[a - 1] = b;
            stamp[a - 1] = timer;
        }
        else
        {
            int c;
            cin >> c;
            sum = c * n;
            allTime = timer;
            allVal = c;
        }
        cout << sum << '\n';
    }

    return 0;
}