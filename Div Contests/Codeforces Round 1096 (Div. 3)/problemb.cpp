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
    int countr, countl;
    int n;
    string s;
    while (t--)
    {

        cin >> n;
        countr = 0, countl = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            countl++;
            else
            countr++;
        }

        if(countl == countr)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

    return 0;
}
