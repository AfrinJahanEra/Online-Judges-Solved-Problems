#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll int a[n];
        ll int b[n];
        int flag = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);

        for (int i = 0; i < n; i++) {
            if ((a[i] % 2) != (b[i] % 2)) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
