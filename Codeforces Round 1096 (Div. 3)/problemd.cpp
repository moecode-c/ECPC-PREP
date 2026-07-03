#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n;
vector<int> v;

int solve(int l, int r)
{
    set<int> st;

    for (int i = 0; i <= n; i++)
        st.insert(i);

    while (l >= 0 && r < n * 2 && v[l] == v[r])
    {
        st.erase(v[l]);
        l--, r++;
    }

    return *st.begin();
}

int main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        v.assign(n * 2, 0);
        for (int i = 0; i < n * 2; i++)
            cin >> v[i];

        int x = -1, y;
        for (int i = 0; i < 2 * n; i++)
        {
            if (!v[i])
            {
                if (~x)
                    y = i;
                else
                    x = i;
            }
        }

        cout << max({solve(x, x), solve(y, y), solve((x + y) / 2, (x + y + 1) / 2)}) << endl;
    }

    return 0;
}
