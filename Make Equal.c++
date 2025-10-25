#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s = 0, e = 0, f = 0;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        int avg = s / n;

        for (int i = 0; i < n; i++) {
            e += (a[i] - avg);
            if (e < 0) {
                f++;
            }
        }

        if (f) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
