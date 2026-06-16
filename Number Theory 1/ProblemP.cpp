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

    ll num;
    set<ll> s;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        while (num % 2 == 0 || num % 3 == 0)
        {
            if (num % 2 == 0)
                num /= 2;

            if (num % 3 == 0)
                num /= 3;

        }

        s.insert(num);
    }
    
    if(s.size() == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}
