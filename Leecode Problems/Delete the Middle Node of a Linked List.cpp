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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next) return nullptr; // If only one node, return empty list

        // Step 1: Calculate size
        int size = 0;
        ListNode* temp = head;
        while (temp) {
            size++;
            temp = temp->next;
        }

        // Step 2: Middle index
        int mid = size / 2; // 0-based index

        // Step 3: Traverse to node before middle
        temp = head;
        for (int i = 0; i < mid - 1; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the middle node
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
