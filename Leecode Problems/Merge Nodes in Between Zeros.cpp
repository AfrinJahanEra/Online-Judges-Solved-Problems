#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> sums; // store sums between zeros
        int currentSum = 0;

        ListNode* temp = head;      // Step 1
        temp = temp->next;          // Step 2: skip first zero

        while (temp != nullptr) {   // Step 3
            if (temp->val == 0) {
                // end of one segment
                sums.push_back(currentSum);
                currentSum = 0;
            } else {
                currentSum += temp->val;
            }
            temp = temp->next;
        }

        // Build new linked list from sums[]
        ListNode* newHead = new ListNode(sums[0]);
        ListNode* current = newHead;

        for (int i = 1; i < sums.size(); i++) {
            current->next = new ListNode(sums[i]);
            current = current->next;
        }

        return newHead;
    }
};
