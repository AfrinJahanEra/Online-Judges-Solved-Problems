#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> g(n, vector<int>(n));
        unordered_set<int> s;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> g[i][j];
                s.insert(g[i][j]);
            }
        }

        vector<int> p(2 * n + 1);

        for (int num = 1; num <= 2 * n; ++num) {
            if (s.find(num) == s.end()) {
                p[1] = num;
                break;
            }
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                p[i + j] = g[i - 1][j - 1];
            }
        }

        for (int i = 1; i <= 2 * n; ++i) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}