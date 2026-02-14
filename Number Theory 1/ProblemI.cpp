#include <bits/stdc++.h>
#include <set>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

static int countn = 0;
const int maxn = 3001;
int spf[maxn];

void sieve()
{
    for (int i = 1; i < 3001; i++)
        spf[i] = i;

    for (int i = 2; i * i <= maxn; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= maxn; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void solve(int n)
{
    set<int> s1;
    while (n > 1)
    {
        s1.insert(spf[n]);
        n /= spf[n];
    }

    if (s1.size() == 2)
        countn++;
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    sieve();

    for (int i = 1; i <= n; i++)
    {
        solve(i);
    }

    cout << countn;
}
