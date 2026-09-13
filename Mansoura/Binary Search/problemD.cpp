#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(all(a));

    for (int i = 0; i < m; i++)
    {
        int x = b[i];

        int l = 0, r = n - 1;
        while(l <= r){
            int mid  = l + (r - l) / 2;
            if(a[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << (l) << " ";
    }
    return 0;
}
