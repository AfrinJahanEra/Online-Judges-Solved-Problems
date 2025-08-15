#include<bits/stdc++.h>
using namespace std;

//brute force 

#include <vector>
#include <algorithm> // for find
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int num : nums1) {

            auto it = find(nums2.begin(), nums2.end(), num);

   
            int nextGreater = -1;
            for (auto jt = it + 1; jt != nums2.end(); ++jt) {
                if (*jt > num) {
                    nextGreater = *jt;
                    break;
                }
            }

            result.push_back(nextGreater);
        }

        return result;
    }
};

// using stack o(n)

#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater; // store mapping: num -> next greater num
        stack<int> st; // stack for decreasing sequence

        // Traverse nums2 from left to right
        for (int num : nums2) {
            // While current number is greater than top of stack
            while (!st.empty() && num > st.top()) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // For remaining elements in stack, no next greater
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        // Build result for nums1
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        return result;
    }
};
