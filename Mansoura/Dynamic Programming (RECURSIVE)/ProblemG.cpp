#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int K, M;
vector<int> weights, values;
vector<vector<int>> dp;

int rob(int i, int curw)
{
    if (K < curw)
        return -1e9;

    if (i == M)
        return 0;

    if (dp[i][curw] != -1)
        return dp[i][curw];

    int ch1 = rob(i + 1, curw + weights[i]) + values[i];

    int ch2 = rob(i + 1, curw);

    return dp[i][curw] = max(ch1, ch2);
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {

        cin >> K >> M;

        // k -> max weight
        // m -> items
        weights.assign(M, 0);
        values.assign(M, 0);
        dp.assign(M , vector<int>(K + 1 , -1));
        
        for (int i = 0; i < M; i++)
        {
            cin >> weights[i] >> values[i];
        }

        cout << "Hey stupid robber, you can get " << rob(0, 0) << "." << endl;
    }

    return 0;
}
