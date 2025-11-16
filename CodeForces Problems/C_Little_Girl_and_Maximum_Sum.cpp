#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> f(n + 2, 0);
    while (t--) {
        int l, r;
        cin >> l >> r;
        f[l]++;
        f[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        f[i] += f[i - 1];
    }
    sort(f.begin() + 1, f.begin() + n + 1);
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * f[i + 1];
    }
    cout << ans << "\n";
    return 0;
}