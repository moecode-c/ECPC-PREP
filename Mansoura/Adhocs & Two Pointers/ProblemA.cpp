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

    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = t - 1, s = 0, d = 0;
    bool turn = true;
    while (l <= r)
    {
        if (turn == true)
        {
            if (arr[r] > arr[l])
            {
                s += arr[r];
                r--;
            }
            else{
                s+= arr[l];
                l++;
            }
        }
        else{
            if (arr[r] > arr[l])
            {
                d += arr[r];
                r--;
            }
            else{
                d+= arr[l];
                l++;
            }
            
        }

        turn = !turn;
    }

    cout << s << " " << d;

    return 0;
}
