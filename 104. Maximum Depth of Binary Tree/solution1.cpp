/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int depth_left,depth_right;
        depth_left = maxDepth(root->left);
        depth_right = maxDepth(root->right);
        
        if(depth_left > depth_right)
            return depth_left+1;
        else
            return depth_right+1;
        
    }
};