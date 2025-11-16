#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i, arr[100000], n, t;
    cin >> t;

    while (t--) {
        int m = 1, total = 0;
        cin >> n;

        for (i = 0; i < 5; i++) {
            arr[i] = n % 10;
            n /= 10;
            if (arr[i] != 0)
                total++;
        }

        cout << total << endl;

        for (i = 0; i < 5; i++) {
            if (arr[i] != 0) {
                cout << arr[i] * m << " ";
            }
            m *= 10;
        }

        cout << endl;
    }

    return 0;
}
