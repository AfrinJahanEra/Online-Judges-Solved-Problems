#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;

    vector<long long> pre1(n + 1, 0);
    vector<long long> pre2(n + 1, 0);

    long long ans = 0;

    // Mark valid 'L'..'R' pairs
    long long l = 0, r = n - 1;
    while (l < r) {
        // If they form a valid pair
        if (s[l] == 'L' && s[r] == 'R') {
            pre1[l] = 1;
            pre2[r] = 1;
            l++;
            r--;
        } else {
            // Move pointers quickly to next possible positions
            if (s[l] != 'L') l++;
            if (s[r] != 'R') r--;
        }
    }

    // Compute prefix sums efficiently
    for (long long i = 1; i < n; i++) {
        pre1[i] += pre1[i - 1];
    }

    for (long long i = n - 2; i >= 0; i--) {
        pre2[i] += pre2[i + 1];
    }

    // Calculate answer
    for (long long i = 0; i < n; i++) {
        ans += min(pre1[i], pre2[i]) * a[i];
    }

    cout << ans << endl;
    return 0;
}
