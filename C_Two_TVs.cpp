#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int a = -1, b = -1;
    for (auto &p : v) {
        int l = p.first, r = p.second;
        if (l > a) {
            a = r;
        } else if (l > b) {
            b = r;
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}