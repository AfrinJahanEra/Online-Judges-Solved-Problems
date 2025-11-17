#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<ll, ll> f;
    ll l = 0, d = 0;
    ll ans = 0;
    
    for (ll r = 0; r < n; r++) {
        if (f[a[r]] == 0) {
            d++;
        }
        f[a[r]]++;
        
        while (d > k) {
            f[a[l]]--;
            if (f[a[l]] == 0) {
                d--;
            }
            l++;
        }
        
        ans += (r - l + 1);
    }
    
    cout << ans << endl;
    
    return 0;
