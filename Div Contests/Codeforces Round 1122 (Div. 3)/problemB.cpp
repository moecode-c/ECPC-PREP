#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;

        while (l < n && s[l] == '0')
            l++;

        while (r >= 0 && s[r] == '1')
            r--;

        if (l > r)
        {
            cout << 0 << '\n';
            continue;
        }

        int zeros = 0, ones = 0;

        for (int i = l; i <= r; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }

        if (s[0] == '1')
            cout << zeros << '\n';
        else
            cout << min(zeros, ones) << '\n';
    }
}