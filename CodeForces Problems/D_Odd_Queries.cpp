#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, t;
        cin >> n >> t;
        vector<int> a(n + 1);
        ll s = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
        }
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] + (a[i] % 2);
        }
        while (t--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            int o = p[r] - p[l - 1];
            ll ns = s - o + (k % 2) * len;
            if (ns % 2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}