#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool prime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }

    return true;
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    ll num;
    while (t--)
    {
        cin >> num;
        double sqrtnum = sqrt(num);
        if(prime(sqrtnum) && sqrtnum == (int)sqrtnum)
        cout<< "YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}
