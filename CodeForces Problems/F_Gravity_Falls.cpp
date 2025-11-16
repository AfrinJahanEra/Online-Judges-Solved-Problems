#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int BIG = 300000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arrays;
        int M = 0;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            M = max(M, k);
            vector<int> a(k);
            for (int j = 0; j < k; j++) {
                cin >> a[j];
            }
            arrays.push_back(a);
        }
        
        vector<int> min_val(M+1, BIG);
        for (auto &a : arrays) {
            for (int j = 0; j < a.size(); j++) {
                int col = j+1;
                if (a[j] < min_val[col]) {
                    min_val[col] = a[j];
                }
            }
        }
        
        int best = 0;
        for (int i = 1; i < n; i++) {
            int na = arrays[i].size();
            int nb = arrays[best].size();
            for (int col = 1; col <= M; col++) {
                int valA = (col <= na) ? arrays[i][col-1] : min_val[col];
                int valB = (col <= nb) ? arrays[best][col-1] : min_val[col];
                if (valA < valB) {
                    best = i;
                    break;
                } else if (valA > valB) {
                    break;
                }
            }
        }
        
        for (int col = 1; col <= M; col++) {
            if (col <= arrays[best].size()) {
                cout << arrays[best][col-1] << " ";
            } else {
                cout << min_val[col] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}