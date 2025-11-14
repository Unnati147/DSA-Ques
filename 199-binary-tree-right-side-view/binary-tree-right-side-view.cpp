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
void Printrightview(TreeNode*root, int level , vector<int> &rightview){
    if(root == NULL) return;
    if(level == rightview.size()) {
    rightview.push_back(root->val);
    }

    Printrightview(root->right, level+1, rightview);
    Printrightview(root->left, level+1, rightview);
}

 vector<int> rightSideView(TreeNode* root){
    vector<int>rightview;
    Printrightview (root, 0, rightview);
    return rightview;
 }
    // vector<int> rightSideView(TreeNode* root) {
    // vector<int> ans;
    // if(!root) return ans;

    // queue<TreeNode*> q;
    // q.push(root);

    // while(!q.empty()){
    //     int n= q.size();
    //     TreeNode* last= nullptr;

    //     for(int i=0; i<n; i++){
    //         TreeNode* Node = q.front();
    //         q.pop();
    //         last= Node;

    //         if(Node->left)
    //         q.push(Node->left);
    //         if(Node->right)
    //         q.push(Node->right);

    //     }
    //     ans.push_back(last->val);
    // }
    // return ans;
    // }
};
   