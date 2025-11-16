#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        
        long long int sqrtSum = sqrt(sum);
        if (sqrtSum * sqrtSum == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}