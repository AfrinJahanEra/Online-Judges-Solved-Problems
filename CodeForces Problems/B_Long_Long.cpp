#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long s = 0;
        int o = 0;
        bool p = false;
        
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            
            s += abs(x);
            
            if (x < 0 && !p) {
                o++;
                p = true;
            }
            if (x > 0) {
                p = false;
            }
        }
        
        cout << s << " " << o << "\n";
    }
    
    return 0;
}