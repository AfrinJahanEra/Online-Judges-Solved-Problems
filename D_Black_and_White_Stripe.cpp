#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; i++) {
            p[i + 1] = p[i] + (s[i] == 'W');
        }
        
        int ans = k;
        for (int i = 0; i <= n - k; i++) {
            ans = min(ans, p[i + k] - p[i]);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}