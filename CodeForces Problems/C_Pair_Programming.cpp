#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        
        vector<int> r;
        int l = k;
        int i = 0, j = 0;
        bool f = true;
        
        while (i < n || j < m) {
            if (i < n && a[i] == 0) {
                r.push_back(0);
                l++;
                i++;
            } else if (j < m && b[j] == 0) {
                r.push_back(0);
                l++;
                j++;
            } else if (i < n && a[i] <= l) {
                r.push_back(a[i]);
                i++;
            } else if (j < m && b[j] <= l) {
                r.push_back(b[j]);
                j++;
            } else {
                f = false;
                break;
            }
        }
        
        if (!f) {
            cout << -1 << "\n";
        } else {
            for (int x : r) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}