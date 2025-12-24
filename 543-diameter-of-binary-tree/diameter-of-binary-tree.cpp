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
// class Solution {
// private:
//     int maxDepth(TreeNode* root) {
//         if(!root) return 0;
//         int leftDepth =maxDepth(root->left);
//         int rightDepth=maxDepth(root->right);
//         return 1 + max(leftDepth, rightDepth);
//     }
//     public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
//         int op1= diameterOfBinaryTree (root->left);
//         int op2= diameterOfBinaryTree(root->right);
//         int op3= maxDepth(root->right)+ maxDepth(root->left);

//         int ans=0;
//         ans= max(op1,max(op2,op3));
//         return ans;
    
//     }
// };
class Solution {
public:
 int D=0;
int height(TreeNode* root){
   if(!root) return 0;
    int leftH= height(root->left);
    int rightH= height(root->right);
    int currD= leftH + rightH;
    D = max(D, currD);
    return max(leftH, rightH) +1;
}
    int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return D;
    }
};
