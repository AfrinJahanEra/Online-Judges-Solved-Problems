#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index mapping
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.count(complement)) { // found the required pair
                return {mp[complement], i};
            }
            mp[nums[i]] = i; // store current number with its index
        }
        return {}; // should never reach here since exactly one answer exists
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]\n";
}
