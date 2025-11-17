#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, t;
    cin >> n >> t;
    
    vector<ll> x(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> x[i];
    }
    
    vector<ll> p(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        p[i] = p[i - 1] + x[i];
    }
    
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << "\n";
    }
    
    return 0;
}
