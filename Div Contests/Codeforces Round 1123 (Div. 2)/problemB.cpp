#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).rbegin(), (x).rend()

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    // Write solution here
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n),uniq;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] == 1) uniq.push_back(v[i]);
        }

       sort(all(uniq));

        while(mp.size() > 0){
            for(int j = 0 ; j < uniq.size() ; j++){
                if(mp[uniq[j]] > 0){
                    cout << uniq[j] << " ";
                    mp[uniq[j]]--;
                }
                else if(mp[uniq[j]] == 0)
                mp.erase(uniq[j]);
            }
        }

        //for(auto i : mp) cout << i.first << "  " << i.second << "  ||";
        //for (int i = 0; i < n; i++)
       //     cout << v[i] << " ";
        cout << '\n';
    }

    return 0;
}
