#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll int a[n * 2];

        for (int i = 0; i < n * 2; i++) {
            cin >> a[i];
        }

        sort(a, a + (n * 2));

        ll int sum[n];  
        int j = 0;

        for (int i = (n * 2) - 1; i >= 1; i -= 2) {
            ll int m = min(a[i], a[i - 1]); 
            sum[j] = m;
            j++;
        }

        ll int sum1 = 0;

        for (int i = 0; i < n; i++) {
            sum1 += sum[i];
        }

        cout << sum1 << endl;
    }

    return 0;
}
