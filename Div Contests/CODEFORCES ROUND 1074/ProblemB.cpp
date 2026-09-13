#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int maxnum(const int arr[], int n)
{
    int maxnumber = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxnumber)
        {
            maxnumber = arr[i];
        }
    }

    return maxnumber;
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max1 = maxnum(arr,n) * n;
        cout << max1 << endl;
    }

    return 0;
}
