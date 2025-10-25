#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        
        int m, n, k;
        cin >> m >> n >> k;
        
        int a[m];
        int b[n];
        
        for (int i = 0; i < m; i++) {
            cin >> a[i]; 
        }
        
        for (int j = 0; j < n; j++) {
            cin >> b[j]; 
        }
        
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (a[i] <= k) {
                for (int j = 0; j < n; j++) {
                    if ((a[i] + b[j]) <= k) {
                        count++;
                    }
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
