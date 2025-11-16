#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int q, k, a[100];
        cin >> q >> k;
        
        for (int j = 0; j < q; j++) {
            cin >> a[j];
        }
        
        sort(a, a + q);
        
        int m = (a[0] + a[q - 1]) / 2;
        int r = max(abs(a[0] - m), abs(a[q - 1] - m));
        
        if (r > k) {
            cout << "-1" << endl;
        } else {
            cout << a[0] + k << endl;
        }
    }
    
    return 0;
}
