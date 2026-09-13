#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> laptops;

    for (int i = 0; i < n; i++)
    {
        int price, quality;
        cin >> price >> quality;
        laptops.push_back({price, quality});
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (laptops[i].second > laptops[i + 1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";

    return 0;
}