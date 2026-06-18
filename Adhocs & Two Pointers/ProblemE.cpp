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
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++)
            cin >> v[i];

        

        int maxcandies = 0;
        if(n != 1){
        int numalice = 1, numbob = 1, weightalice = v[l], weightbob = v[r];
        while (l < r)
        {
            if (weightalice > weightbob)
            {
                r--;
                weightbob+= v[r];
                numbob++;
            }
            else if (weightalice < weightbob)
            {
                l++;
                weightalice+= v[l];
                numalice++;
            }
            else{
                maxcandies = max(maxcandies,(numbob+numalice));
                l++;
                weightalice+= v[l];
                numalice++;
            }
        }
    }

        cout << maxcandies << endl;
    }

    return 0;
}
