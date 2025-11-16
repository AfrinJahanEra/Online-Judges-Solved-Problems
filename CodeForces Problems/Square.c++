#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a[4], b[4];

        int small1 = INT_MAX, big1 = INT_MIN, small2 = INT_MAX, big2 = INT_MIN;

        for (int i = 0; i < 4; i++) {
            cin >> a[i] >> b[i];

            small1 = min(small1, a[i]);
            big1 = max(big1, a[i]);
            small2 = min(small2, b[i]);
            big2 = max(big2, b[i]);
        }

        cout << (big1 - small1) * (big2 - small2) << endl;
    }

    return 0;
}
