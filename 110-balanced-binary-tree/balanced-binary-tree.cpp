/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int heightCheck (TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = heightCheck(root->left);
        int rightHeight = heightCheck(root->right);
        int finalAns = max(leftHeight, rightHeight) +1;
        return finalAns;
    }
    bool isBalanced(TreeNode* root) {
      if(root == NULL){
            return true;
        }
        int left = heightCheck(root->left);
        int right = heightCheck(root->right);
        int diff= abs(left-right);
        bool currNode = (diff<=1);

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(leftAns && rightAns && currNode){
            return true;
        }else{
            return false;
        }
    }
};
