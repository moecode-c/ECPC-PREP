#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);

    for (int i = 0; i < n; i++)
        cin >> lanterns[i];

    sort(lanterns.begin(), lanterns.end());

    double left = lanterns[0];
    double right = l - lanterns[n - 1];
    double middle = 0;

    for (int i = 0; i < n - 1; i++)
    {
        middle = max(middle, (lanterns[i + 1] - lanterns[i]) / 2.0);
    }

    double answer = max({left, right, middle});

    cout << fixed << setprecision(10) << answer;

    return 0;
}