#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 1) {
                odd.push_back(x);
            } else {
                even.push_back(x);
            }
        }
        for (int i = 0; i < odd.size(); i++) {
            cout << odd[i] << " ";
        }
        for (int i = 0; i < even.size(); i++) {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    return 0;
}