#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int maxn = 1001;
vector<int> primesieve(maxn, true);
vector<int> primes(maxn);

void sieve()
{

    primesieve[0] = primesieve[1] = false;

    for (int i = 2; i * i < maxn; i++)
    {
        if (primesieve[i] == true)
        {
            for (int j = i * i; j < maxn; j += i)
            {
                primesieve[j] = false;
            }
        }
    }
}

int main()
{
    fast_io();
    sieve();

    for (int i = 0; i < primesieve.size(); i++)
    {
        if (primesieve[i] == true)
        {
            primes.push_back(i);
        }
    }

    int count = 0;

    int n;
    cin >> n;
    int k;
    cin >> k;
    for (int i = 2; i <= n; i++)
    {
        if (primesieve[i] == true)
        {
            for (int j = 0; j <= primes.size() - 2; j++)
            {
                if (i == (primes[j] + primes[j + 1] + 1))
                    count++;
            }
        }
    }

    if (count >= k)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
