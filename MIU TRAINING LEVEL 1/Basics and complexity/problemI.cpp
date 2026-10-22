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

int freq[100001];

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        vector<int> counts;
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] > 0)
            {
                counts.push_back(freq[a[i]]);
                freq[a[i]] = 0;
            }
        }

        if (counts.size() > 2)
            cout << "No\n";
        else if (counts.size() == 1)
            cout << "Yes\n";
        else
            cout << (abs(counts[0] - counts[1]) <= 1 ? "Yes\n" : "No\n");
    }
    return 0;
}