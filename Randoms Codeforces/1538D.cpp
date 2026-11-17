#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()
 
vector<int> primes;
 
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void build()
{
    const int N = 31623;
    vector<bool> comp(N + 1, false);
    for (int i = 2; i * i <= N; i++)
    {
        if (!comp[i])
        {
            for (int j = i * i; j <= N; j += i) comp[j] = true;
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!comp[i]) primes.push_back(i);
    }
}
 
int moves(int n)
{
    int cnt = 0;
    for (int p : primes)
    {
        if (p * p > n) break;
        while (n % p == 0)
        {
            n /= p;
            cnt++;
        }
    }
    if (n > 1) cnt++;
    return cnt;
}
 
void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
 
    if (k > 60)
    {
        cout << "NO\n";
        return;
    }
 
    int g = __gcd(a, b);
 
    int mn = (a != g) + (b != g);
    int mx = moves(a) + moves(b);
 
    if (a == b)
    {
        if (k != 1 and k <= mx) cout << "YES\n";
        else cout << "NO\n";
    }
    else
    {
        if (k >= mn and k <= mx) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int32_t main()
{
    fast_io();
    build();
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}