/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int Depth(struct TreeNode* root) {
    if(root == NULL) return 0;
    int left = 1 + Depth(root->left);
    int right = 1 + Depth(root->right);
    
    return left > right ? left : right;
}

struct TreeNode* lcaDeepestLeaves(struct TreeNode* root) {
    if(root == NULL) return NULL;
    int left = Depth(root->left);
    int right = Depth(root->right);

    if(left == right) return root;
    
    if(left > right){
        return lcaDeepestLeaves(root->left);
    } else{
        return lcaDeepestLeaves(root->right);
    }

}
