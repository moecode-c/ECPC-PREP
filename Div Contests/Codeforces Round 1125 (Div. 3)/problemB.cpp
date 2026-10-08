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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> vis(n+1);


        stack<int> st;
        int printed = 0;
        for (int i = 1; i <= n; i++)
        {
            vis[i] = false;
            if (s[i - 1] == '1')
            {
                st.push(i);
            }
            else if (s[i - 1] == '2')
            {
                if (!st.empty())
                {
                    vis[st.top()] = true;
                    printed++;
                    st.pop();
                }
                else
                {
                    vis[i] = true;
                    printed++;
                }
            }
            else{
                vis[i] = true;
                printed++;
            }
        }

        cout << n-printed << '\n';
        for(int i = 1; i <= n ; i++){
            if(!vis[i])
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}
