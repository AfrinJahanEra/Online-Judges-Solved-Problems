#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

int main(){

    ll t;
    cin >> t;

    while (t--) {
        ll int n, m, k, l;
        cin >> n >> m >> k >> l;
        
        ll int count=0;
        
        while (n--) {
            ll int x;
            cin >> x;

            if (abs(l - x) % k == 0) {
                ll calc = abs(l - x) / k;
                if (calc <= (m - 1) && calc >= 1)
                    count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
