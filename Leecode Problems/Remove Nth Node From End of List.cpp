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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;

        // Step 1: Calculate the size of the list
        int size = 0;
        ListNode* temp = head;
        while (temp) {
            size++;
            temp = temp->next;
        }

        // Step 2: If we remove the first node
        if (n == size) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        // Step 3: Find (size - n - 1)-th node
        int targetIndex = size - n - 1;
        temp = head;
        for (int i = 0; i < targetIndex; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the next node
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
