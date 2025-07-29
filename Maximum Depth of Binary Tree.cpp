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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int lh=1+maxDepth(root->left);
        int rh=1+maxDepth(root->right);
        return max(lh,rh);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    cout<<sol.maxDepth(root)<<endl;

    return 0;
}