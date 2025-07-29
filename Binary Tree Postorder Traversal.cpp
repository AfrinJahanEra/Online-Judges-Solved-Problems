#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorder(root, result);
        return result;
    }

private:
    void postorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;
        postorder(node->left, result);
        postorder(node->right, result);
        result.push_back(node->val);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> res = sol.postorderTraversal(root);

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
