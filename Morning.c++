#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[4];
        for (int j = 0; j < 4; j++) {
            a[j] = (n % 10);
            n = n / 10;
            if (a[j] == 0) {
                a[j] = 10;
            }
        }
        int first_count=a[3]-1;
        int move = 4 + first_count+ abs(a[0] - a[1]) + abs(a[1] - a[2]) + abs(a[2] - a[3]);
        cout << move << endl;
    }

    return 0;
}
