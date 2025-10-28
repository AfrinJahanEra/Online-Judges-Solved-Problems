#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // start from the smallest lexicographic order

        do {
            ans.push_back(nums); // store current permutation
        } while (next_permutation(nums.begin(), nums.end())); // generate next permutation

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.permute(nums);

    for (auto &perm : result) {
        for (auto x : perm) {
            cout << x << " ";
        }
        cout << "\n";
    }
}
