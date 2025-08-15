#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};


// binary search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; // Avoid overflow

            if (nums[mid] == target) {
                return mid; // Found target
            }
            else if (nums[mid] < target) {
                left = mid + 1; // Search right half
            }
            else {
                right = mid - 1; // Search left half
            }
        }

        return -1; // Not found
    }
};
