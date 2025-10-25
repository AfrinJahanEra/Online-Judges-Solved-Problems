#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll int t;
    cin >> t;
    for(ll int i = 0; i < t; i++) {
        ll n, k;
        cin >> n >> k;

        cout << min(n, k) << " " << max(n, k) << endl;
    }
    return 0;
}
