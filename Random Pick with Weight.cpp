#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> prefix;
    int total;
public:
    Solution(vector<int>& w) {
        prefix.resize(w.size());
        partial_sum(w.begin(), w.end(), prefix.begin()); // STL prefix sum
        total = prefix.back();
        srand(time(0)); // seed for randomness
    }
    
    int pickIndex() {
        int r = rand() % total + 1; // random number in [1, total]
        return upper_bound(prefix.begin(), prefix.end(), r - 1) - prefix.begin();
    }
};

int main() {
    vector<int> w = {1, 3};
    Solution sol(w);
    for (int i = 0; i < 10; i++) {
        cout << sol.pickIndex() << " ";
    }
    cout << "\n";
}
