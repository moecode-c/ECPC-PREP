#include <bits/stdc++.h>
#include <map>
using namespace std;

using ll = long long;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

map<char, int> countfreq(string s)
{

    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    return m;
}

bool isprime(int n)
{

    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;

}

int main()
{

    fast_io();

    int t;
    cin >> t;
    int ifempty;

    int i = 1;
    while (t--)
    {
        string s;
        cin >> s;

        ifempty = true;

        map<char, int> m = countfreq(s);

        cout << "Case " << i << ": ";

        for (auto ele : m)
        {
            if (isprime(ele.second))
            {
                cout << ele.first;
                ifempty = false;
            }
        }

        if (ifempty)
            cout << "empty";

        
        cout << endl;
        i++;
    }

    return 0;
}
