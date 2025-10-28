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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preOrder(root,result);
        return result;
    }
    void preOrder(TreeNode* root,vector<int>& result){
        if(root==NULL){
            return;
        }
        result.push_back(root->val);
        preOrder(root->left,result);
        preOrder(root->right,result);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> res = sol.preorderTraversal(root);

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
