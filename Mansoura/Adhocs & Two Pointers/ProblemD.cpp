#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int W, H, N;
        cin >> W >> H >> N;

        // difference array (1-indexed)
        vector<vector<int>> diff(W + 2, vector<int>(H + 2, 0));

        while (N--) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            int lx = min(x1, x2);
            int rx = max(x1, x2);
            int ly = min(y1, y2);
            int ry = max(y1, y2);

            diff[lx][ly] += 1;
            diff[rx + 1][ly] -= 1;
            diff[lx][ry + 1] -= 1;
            diff[rx + 1][ry + 1] += 1;
        }

        // build prefix sum (horizontal)
        for (int i = 1; i <= W; i++) {
            for (int j = 1; j <= H; j++) {
                diff[i][j] += diff[i][j - 1];
            }
        }

        // build prefix sum (vertical)
        for (int i = 1; i <= W; i++) {
            for (int j = 1; j <= H; j++) {
                diff[i][j] += diff[i - 1][j];
            }
        }

        // count uncovered cells
        int ans = 0;
        for (int i = 1; i <= W; i++) {
            for (int j = 1; j <= H; j++) {
                if (diff[i][j] == 0)
                    ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}