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

    bool num67;
    int a;
    while (t--)
    {
        num67 = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 67 == 0)
            {
                num67 = true;
            }
        }
        if(num67) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
