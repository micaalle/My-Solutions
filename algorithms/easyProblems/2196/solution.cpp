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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int, TreeNode*> nodes;
        nodes.reserve(descriptions.size() + 1);

        int root = 0;

        for(int i = 0; i < descriptions.size(); i++){
            int x = descriptions[i][0], y = descriptions[i][1], z = descriptions[i][2];

            if(!nodes.contains(x)){
                nodes[x] = new TreeNode(x);
                root ^= x;
            }
            if(!nodes.contains(y)){
                nodes[y] = new TreeNode(y);
                root ^= y;
            }

            if(z){
                nodes[x]->left = nodes[y];
            } else {
                nodes[x]->right = nodes[y];
            }
            root ^= y;
        }
        return nodes[root];
    }
};
