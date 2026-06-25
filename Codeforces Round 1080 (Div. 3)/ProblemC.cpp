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
    int n;
    vector<int> v;
    map<int, int> m = {{1, 6}, {2, 5}, {3, 4}, {6, 1}, {5, 2}, {4, 3}};
    while (t--)
    {
        cin >> n;
        v.assign(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int count = 0;

        for (int i = 1; i <= n - 1; i++)
        {
            if (m[v[i]] == v[i - 1] || v[i] == v[i - 1])
            {

                count++;
                v[i] = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}
