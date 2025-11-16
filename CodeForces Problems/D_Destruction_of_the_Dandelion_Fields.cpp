#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> odds;
        ll sum_evn = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                sum_evn += a[i];
            } else {
                odds.push_back(a[i]);
            }
        }
        if (odds.empty()) {
            cout << 0 << endl;
        } else {
            sort(odds.rbegin(), odds.rend()); 
            int k = (odds.size() + 1) / 2;
            ll sum_odd = 0;
            for (int i = 0; i < k; i++) {
                sum_odd += odds[i];
            }
            cout << sum_evn + sum_odd << endl;
        }
    }
    return 0;
}