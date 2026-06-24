#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int t, a, n;
vector<int> oxy;
vector<int> nit;
vector<int> weight;

int scuba(int i, int curO, int curN)
{
    if (curO >= t && curN >= a || i == n)
    {
        return 1e9;
    }

    int ch1 = scuba(i + 1, curO, curN);
    int ch2 = scuba(i + 1, curO + oxy[i], curN + nit[i]) + weight[i];

    return min(ch1,ch2);
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> t >> a;
        cin >> n;

        oxy.resize(n);
        nit.resize(n);
        weight.resize(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> oxy[i] >> nit[i] >> weight[i];
        }

        cout << scuba(0,0,0) << endl;
    }

    return 0;
}
