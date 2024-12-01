#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> one(n, vector<int>(m));
        vector<vector<int>> two(n, vector<int>(m, 0));


        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> one[i][j];
            }
        }

        int c = 0;


        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (one[i][j] == 1) {
                    if (i == 0 || j == 0) {
                        two[i][j] = 1;
                    } else {
                        two[i][j] = min({two[i-1][j], two[i][j-1], two[i-1][j-1]}) + 1;
                    }
                    c =c+ two[i][j];
                }
            }
        }


        cout << "Case " << i << ": " <<c++<< '\n';
    }

    return 0;
}
