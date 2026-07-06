#include <bits/stdc++.h>
using namespace std;

vector<long long> lucky;

void dfs(long long num, int len, int cnt4, int cnt7, int targetLen)
{
    if (len == targetLen)
    {
        if (cnt4 == cnt7)
            lucky.push_back(num);
        return;
    }

    // Put a 4
    dfs(num * 10 + 4, len + 1, cnt4 + 1, cnt7, targetLen);

    // Put a 7
    dfs(num * 10 + 7, len + 1, cnt4, cnt7 + 1, targetLen);
}

int main()
{
    int n;
    cin >> n;

    // Generate all balanced lucky numbers
    for (int len = 2; len <= 10; len += 2)
        dfs(0, 0, 0, 0, len);

    sort(lucky.begin(), lucky.end());

    cout << *lower_bound(lucky.begin(), lucky.end(), (long long)n);

    return 0;
}