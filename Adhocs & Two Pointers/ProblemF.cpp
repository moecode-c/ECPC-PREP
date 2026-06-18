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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, char>> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i].first;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            v[i].second = s[i];

        int l = 0, r = n - 1;
        int sum = 0;

        while (l < r)
        {
            if (v[l].second != 'L')
                l++;

            if (v[r].second != 'R')
                r--;

            if (v[l].second == 'L' && v[r].second == 'R')
            {
                for (int i =  l ; i <= r ; i++){
                    sum += v[i].first;
                }
                break;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
