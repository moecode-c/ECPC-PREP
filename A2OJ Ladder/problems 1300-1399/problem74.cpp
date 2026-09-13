#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    int n;
    cin >> n;

    vector<int> v(n);
    int num, ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == 0)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = -1;
            ones++;
        }
    }

    int cur = v[0];
    int best = v[0];

    for(int i = 1 ; i < n ; i++){
        cur = max(v[i] , v[i] + cur);
        best = max(cur , best);
    }

    cout << ones + best;

    return 0;
}
