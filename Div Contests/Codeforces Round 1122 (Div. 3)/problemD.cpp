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
            cin >> a[i];

        vector<int> b;

        for (int i = 0; i < n; i++)
            b.push_back(a[i] + n - (i + 1));

        sort(all(b));

        int answer = 1;
        int current = 1;

        int ballast = 0;

        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
                continue;

            if (b[i] == b[i - 1] + 1)
                current++;
            else
                current = 1;

            answer = max(answer, current);
        }

        cout << answer << '\n';
    }
}