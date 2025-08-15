#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto start = lower_bound(nums.begin(), nums.end(), target);
        auto end = upper_bound(nums.begin(), nums.end(), target);

        if (start == nums.end() || *start != target) 
            return {-1, -1};

        return {int(start - nums.begin()), int(end - nums.begin() - 1)};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> res = sol.searchRange(nums, target);
    cout << "[" << res[0] << "," << res[1] << "]\n"; // [3,4]

    target = 6;
    res = sol.searchRange(nums, target);
    cout << "[" << res[0] << "," << res[1] << "]\n"; // [-1,-1]
}
