#include <bits/stdc++.h>
#include <map>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const ll MAXN = 1e7 + 5;
ll spf[MAXN];

void sieve()
{
    for (ll i = 1; i < MAXN; i++)
        spf[i] = i;

    for (ll i = 2; i * i < MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j < MAXN; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

void countfreq(ll num)
{

    map<ll, ll> m1;

    while (num > 1)
    {
        m1[spf[num]]++;
        num /= spf[num];
    }

    int counteven = 0;
    int countodd = 0;

    for (auto ele : m1)
    {
        if (ele.second % 2 == 0)
            counteven++;
        else
            countodd++;
    }

    if (counteven > countodd)
        cout << "Psycho Number\n";
    else
        cout << "Ordinary Number\n";
}

int main()
{

    fast_io();
    sieve();

    ll t;
    cin >> t;
    ll num;

    while (t--)
    {
        cin >> num;
        if (num == 0 || num == 1)
        {
            cout << "Ordinary Number\n";
        }
        else
        {
            countfreq(num);
        }
    }

    return 0;
}
