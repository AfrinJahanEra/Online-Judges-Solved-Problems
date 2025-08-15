#include <bits/stdc++.h>
using namespace std;
// Using Map / Multiset (frequency counting idea)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        map<int,int> freq;
        sort(nums.begin(), nums.end()); // sorting
        int n = nums.size();
        int res = 1;
        
        for (int i = 0; i < n; i++) {
            int ops = 0;
            for (int j = i-1; j >= 0; j--) {
                ops += nums[i] - nums[j];
                if (ops > k) break;
                res = max(res, i - j + 1);
            }
        }
        return res;
    }
};
// Optimal: Sliding Window + Sorting + Prefix Sum


class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long sum = 0;
        int left = 0, res = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while ((long)(nums[right]) * (right - left + 1) - sum > k) {
                sum -= nums[left];
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,4};
    int k = 5;
    cout << sol.maxFrequency(nums, k) << "\n"; // 3
}
