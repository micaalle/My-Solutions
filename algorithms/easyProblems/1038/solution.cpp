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
    private:
        int ret = 0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(root == NULL) return NULL;

        bstToGst(root->right);
        ret += root->val;
        root->val = ret;
        bstToGst(root->left);

        return root;
        
    }
};
