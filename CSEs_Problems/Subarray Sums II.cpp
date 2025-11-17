#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x;
    cin >> n >> x;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<ll, ll> m;
    m[0] = 1;
    
    ll s = 0, ans = 0;
    
    for (ll i = 0; i < n; i++) {
        s += a[i];
        if (m.find(s - x) != m.end()) {
            ans += m[s - x];
        }
        m[s]++;
    }
    
    cout << ans << endl;
    
    return 0;
}
