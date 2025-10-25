#include <iostream>
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

        int count1 = 0, count2 = 0; 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (a[i] % 2 != 0) {
                    count1++;
                }
                continue;
            } else {
                if (a[i] % 2 == 0) {
                    count2++;
                }
                continue;
            }
        }
        if (count1 == count2) {
            cout << count1 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
