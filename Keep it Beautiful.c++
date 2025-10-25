#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, f, i, b, count = 0;
        cin >> n >> f;
        cout << 1;
        b = f;
        for (i = 0; i < n - 1; i++) {
            cin >> a;
            if (a >= b && count == 0) {
                cout << 1;
                b = a;
            } else if (a >= b && count == 1 && a <= f) {
                cout << 1;
                b = a;
            } else if (a < b && count == 0 && a <= f) {
                count++;
                b = a;
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
