#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x;
    cin >> n >> x;
    
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    
    sort(a.begin(), a.end());
    
    for (ll i = 0; i < n; i++) {
        ll l = i + 1, r = n - 1;
        ll t = x - a[i].first;
        while (l < r) {
            if (a[l].first + a[r].first == t) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second;
                return 0;
            } else if (a[l].first + a[r].first < t) {
                l++;
            } else {
                r--;
            }
        }
    }
    
    cout << "IMPOSSIBLE";
    
    return 0;
