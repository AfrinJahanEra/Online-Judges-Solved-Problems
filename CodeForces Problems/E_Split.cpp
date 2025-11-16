#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> freq_total(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq_total[a[i]]++;
        }
        
        bool possible = true;
        for (int v = 1; v <= n; v++) {
            if (freq_total[v] % k != 0) {
                possible = false;
                break;
            }
        }
        
        if (!possible) {
            cout << 0 << endl;
            continue;
        }
        
        vector<int> T(n + 1, 0);
        for (int v = 1; v <= n; v++) {
            T[v] = freq_total[v] / k;
        }
        
        vector<int> freq_current(n + 1, 0);
        int left = 0;
        int bad = 0;
        long long ans = 0;
        for (int right = 0; right < n; right++) {
            int val = a[right];
            freq_current[val]++;
            if (freq_current[val] > T[val]) {
                bad++;
            }
            
            while (bad > 0) {
                int left_val = a[left];
                freq_current[left_val]--;
                if (freq_current[left_val] == T[left_val]) {
                    bad--;
                }
                left++;
            }
            
            ans += (right - left + 1);
        }
        
        cout << ans << endl;
    }
    return 0;
}