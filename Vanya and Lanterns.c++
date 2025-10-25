#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    double d = max(a[0] * 2.0, (l - a[n - 1]) * 2.0);

    for (int i = 0; i < n - 1; i++) {
        if (d < (a[i + 1] - a[i])) {
            d = a[i + 1] - a[i];
        }
    }

    cout << fixed;
    cout.precision(10);
    cout << d / 2.0 << endl;

    return 0;
}
