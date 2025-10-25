#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long n, counter = 0;
        cin >> n;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                counter++;
            } else if (n % 3 == 0) {
                n = (2 * n) / 3;
                counter++;
            } else if (n % 5 == 0) {
                n = (4 * n) / 5;
                counter++;
            } else {
                counter = -1;
                break;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
