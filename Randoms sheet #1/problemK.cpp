#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int32_t main() {
    fast_io();

    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '<') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "No\n";
                return 0;
            }

            if (c == ')' && st.top() != '(') {
                cout << "No\n";
                return 0;
            }

            if (c == ']' && st.top() != '[') {
                cout << "No\n";
                return 0;
            }

            if (c == '>' && st.top() != '<') {
                cout << "No\n";
                return 0;
            }

            st.pop();
        }
    }

    if (st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
}