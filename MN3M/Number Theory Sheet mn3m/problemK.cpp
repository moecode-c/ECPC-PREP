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

int n = 3000;
vector<int> spf;

void sieve()
{
    for (int i = 1; i <= n; i++)
        spf[i] = i;

    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
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

    spf.resize(n + 1);
    sieve();
    int num;
    cin >> num;

    
    int count = 0;
    for(int i = 6 ; i <= num ; i++){
        unordered_map<int,int> m;
        bool can = true;
        int inum = i;
        while(inum > 1){
            m[spf[inum]]++;
            inum /= spf[inum];
            if(m.size() > 2){
                can = false;
                break;
            }
        }
        if(m.size() != 2){
                can = false;
        }
        if(can) count++;
    }

    cout << count;

    return 0;
}
