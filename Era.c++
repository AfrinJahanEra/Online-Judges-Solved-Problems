#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll int n;
        cin >> n;
        ll int count = 0;
        for (ll int j = 1; j <= n; j++) {
            ll int a;
            cin >> a;
            if (count < (a - j)) {
                count = (a - j);
            }
            else{
                continue;
            }
        }
        cout << count << endl;
    }
    return 0;
}
