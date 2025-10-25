#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c[a];
    int sum = 0;
    int j = 0;
    int d[a];
    int count = 0;
    for (int i = 0; i < a; i++) {
        cin >> c[i];
        if (c[i] < 0) {
            count++;
            d[j] = -c[i];
            sum = sum + c[i];
            j++;
        }
    }
    if (count <= b) {
        cout << abs(sum) << endl;
    }
    else {
        for (int i = 0; i < j; i++) {
            for (int k = i + 1; k < j; k++) {
                if (d[i] < d[k]) {
                    int temp = d[i];
                    d[i] = d[k];
                    d[k] = temp;
                }
            }
        }
        sum = 0;
        for (int i = 0; i < min(b,j); i++) {
            sum = sum + d[i];
        }
        cout << sum << endl;
    }

    return 0;
}
