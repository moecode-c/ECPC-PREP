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

int MAXN = 100000 + 5;
vector<int> spf;

void sieve()
{
    for (int i = 0; i < MAXN; i++)
    {
        spf[i] = i;
    }

    spf[0] = spf[1] = 1;

    for (int i = 2; i * i < MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int32_t main()
{
    fast_io();
    spf.assign(MAXN,0);

    sieve();

    int n, k;
    cin >> n >> k;

    vector<int> prim;
    while (n > 1)
    {
        prim.push_back(spf[n]);
        n /= spf[n];
    }

    int result = 1;

    if(k > prim.size()){
        cout << -1;
        return 0;
    }
    for (int i = 0; i < prim.size(); i++)
    {

        if (prim.size() - k + 1== 0)
        {
            cout << prim[i] << " ";
        }
        else
        {
            result *= prim[i];
            k++;
        }
    }
    cout << result;
    return 0;
}
