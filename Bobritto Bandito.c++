#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        
        int left = 0, right = 0;
        int current_l = 0, current_r = 0;
        
        for (int i = 1; i <= m; ++i) {
            if (i % 2 == 1) {
                if (current_r < r) {
                    current_r++;
                } else if (current_l > l) {
                    current_l--;
                }
            } else {
                if (current_l > l) {
                    current_l--;
                } else if (current_r < r) {
                    current_r++;
                }
            }
        }
        
        cout << current_l << " " << current_r << endl;
    }
    return 0;
}