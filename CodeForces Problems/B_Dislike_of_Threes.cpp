#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> seq;
    for (int x = 1; seq.size() < 1000; x++) {
        if (x % 3 == 0 || x % 10 == 3) continue;
        seq.push_back(x);
    }

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << seq[k - 1] << "\n";
    }
    return 0;
}
