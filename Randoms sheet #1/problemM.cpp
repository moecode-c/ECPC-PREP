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

    string s;
    cin >> s;
    sort(all(s));

    vector<string> results;
    do
    {
        results.push_back(s);
    } while (next_permutation(all(s)));

    cout << results.size() << "\n";
    for (auto str : results)
        cout << str << "\n";

    return 0;
}