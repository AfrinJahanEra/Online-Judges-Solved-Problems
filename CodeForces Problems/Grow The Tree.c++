#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a[100000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long int sum1 = 0, sum2 = 0;
    for (i = 0; i < n / 2; i++) {
        sum1 = sum1 + a[i];
    }
    for (i = n / 2; i < n; i++) {
        sum2 = sum2 + a[i];
    }
    cout << sum1 * sum1 + sum2 * sum2;
    return 0;
}
