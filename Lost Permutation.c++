#include <iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
    ll int t;
    cin >> t;
    while(t--) {
        ll int m, s, i, j, n, something = 0;
        cin >> m >> s;
        int b[m];
        for(i = 0; i < m; i++) {
            cin >> b[i];
            something = max(something,(ll)b[i]);
        }
       
        int sum = 0, flag = 0;
        
        for (j = 1; j <= something; j++) {
            bool found = false;
            for(n = 0; n < m; n++) {
                if(j == b[n]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                sum += j;
            }
        }
        
        while(sum <= s) {
            if(sum == s) {
                cout << "YES" << endl;
                flag = 1;
                break;
            } else {
                something++;
                sum += something;
            }
        }
        if(!flag) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
