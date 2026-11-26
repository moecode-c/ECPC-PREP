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

int cal(int a, int b, char s)
{
    if (s == '+')
        return a + b;
    else if (s == '-')
        return a - b;
    else if (s == '/')
        return a / b;
    else
        return a * b;
}

void solve()
{
    int A, B, C, index = 0;

    vector<char> s(2);

    cin >> A >> s[0] >> B >> s[1] >> C;

    if ((s[0] == '+' || s[0] == '-') && (s[1] == '*' || s[1] == '/'))
        index = 1;

    if (index == 0)
    {
        cout << cal(cal(A, B, s[0]), C, s[1]);
    }
    else
    {
        cout << cal(A, cal(B, C, s[1]), s[0]);
    }
}

int32_t main()
{
    fast_io();
    solve();
    return 0;
}