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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int sum = 0;
        if(root->left && root->left->left==NULL && root->left->right==NULL){
            sum += root->left->val;
        }
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);
        return sum;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    cout<<sol.sumOfLeftLeaves(root)<<endl;

    return 0;
}