#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[101], b[101], tm[101];
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> tm[i];
        }
        
        int cur = 0;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cur += a[i] + tm[i];
            } else {
                cur += a[i] - b[i-1] + tm[i];
            }
            
            if (i == n) {
                break;
            }
            
            int w = (b[i] - a[i] + 1) / 2;
            cur = max(cur + w, b[i]);
        }
        cout << cur << endl;
    }
    return 0;
}