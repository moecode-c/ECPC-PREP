#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int spf[201];
int maxn = 200;

void spfarr()
{
    for (int i = 0; i <= maxn; i++)
        spf[i] = i;

    for (int i = 2; i * i <= maxn; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= maxn; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

bool semiprime(int num)
{
    if (num <= 1) return false;

    int p1 = spf[num];
    num /= p1;
    if (num == 1) return false;

    int p2 = spf[num];
    num /= p2;
    if (num != 1) return false; 

    return p1 != p2; 
}

vector<int> semiprimes;

void calcsemis()
{
    for (int i = 2; i <= maxn; i++)
    {
        if (semiprime(i))
            semiprimes.push_back(i);
    }
}

int main()
{
    fast_io();

    spfarr();
    calcsemis();

    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        bool found = false;
        for (int i = 0; i < semiprimes.size() && !found; i++)
        {
            for (int j = 0; j < semiprimes.size(); j++)
            {
                if (n == (semiprimes[i] + semiprimes[j]))
                {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
