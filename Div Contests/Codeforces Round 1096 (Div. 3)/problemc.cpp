#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<int> only2, only3, none, only6;
int n;

void solve()
{
    cin >> n;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num % 6 == 0)
            only6.push_back(num);
        else if (num % 3 == 0)
            only3.push_back(num);
        else if (num % 2 == 0)
            only2.push_back(num);
        else
            none.push_back(num);
    }

    for (int i : only6)
        cout << i << " ";
    for (int i : only2)
        cout << i << " ";
    for (int i : none)
        cout << i << " ";
    for (int i : only3)
        cout << i << " ";

    cout << endl;
    only2.clear();
    only3.clear();
    only6.clear();
    none.clear();
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
