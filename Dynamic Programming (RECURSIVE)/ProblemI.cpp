#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 1e5;
int t, a, n;
vector<int> oxy;
vector<int> nit;
vector<int> weight;
vector<vector<vector<int>>> dp;

int scuba(int i, int curO, int curN)
{
    curO = min(curO, t);
    curN = min(curN, a);

    if (curO >= t && curN >= a)
        return 0;

    if (i == n)
        return 1e9;

    if (dp[i][curO][curN] != -1)
        return dp[i][curO][curN];

    int skip = scuba(i + 1, curO, curN);

    int take = weight[i] +
               scuba(i + 1,
                     curO + oxy[i],
                     curN + nit[i]);

    

    return dp[i][curO][curN] = min(skip, take);
}

int main()
{
    fast_io();

    int tc;
    cin >> tc;

    while (tc--)
    {
        cin >> t >> a;
        cin >> n;

        oxy.resize(n);
        nit.resize(n);
        weight.resize(n);
        dp.assign(
            n + 1,
            vector<vector<int>>(
                t + 1,
                vector<int>(a + 1, -1)));

        for (int i = 0; i < n; i++)
        {
            cin >> oxy[i] >> nit[i] >> weight[i];
        }

        cout << scuba(0, 0, 0) << endl;
    }

    return 0;
}
