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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inOrder(root,result);
        return result;
    }
    void inOrder(TreeNode* root,vector<int>& result){
        if(root==NULL){
            return;
        }
        inOrder(root->left,result);
        result.push_back(root->val);
        inOrder(root->right,result);
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> res = sol.inorderTraversal(root);

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

