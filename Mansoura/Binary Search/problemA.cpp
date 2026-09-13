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

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int x;
    while (q--)
    {
        cin >> x;
        int l = 0, r = n - 1;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] == x)
            {
                ans = mid;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << (ans == -1 ? -1 : ans + 1) << endl;
    }

    return 0;
}
