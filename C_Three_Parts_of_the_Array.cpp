#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    vector<ll> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    ll sum1 = 0, sum3 = 0;
    ll max_sum = 0;
    int left = 0, right = n - 1;
    while (left <= right) {
        if (sum1 < sum3) {
            sum1 += d[left];
            left++;
        } else if (sum1 > sum3) {
            sum3 += d[right];
            right--;
        } else {
            max_sum = sum1; 
            sum1 += d[left];
            left++;
        }
    }
    if (sum1 == sum3) {
        max_sum = sum1;
    }
    cout << max_sum << endl;
    return 0;
}