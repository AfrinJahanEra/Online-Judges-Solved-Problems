#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int j = 0;
        int b[n] = {0};
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                b[j]++;
            } else {
                j++;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (b[i] < b[k]) {
                    int temp = b[k];
                    b[k] = b[i];
                    b[i] = temp;
                }
            }
        }

        cout << b[0] << endl;
    }

    return 0;
}
