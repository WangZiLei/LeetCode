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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t2 == NULL)
            return t1;
        if(t1 == NULL){
            struct TreeNode *node = new TreeNode(0);
            t1 = node;
        }
        t1->val += t2->val;
        if(t1->left == NULL && t2->left!=NULL){
            struct TreeNode *node = new TreeNode(0);
            t1->left = node;
        }
        if(t1->right == NULL && t2->right!=NULL){
            struct TreeNode *node = new TreeNode(0);
            t1->right = node;
        }
        mergeTrees(t1->left,t2->left);
        mergeTrees(t1->right,t2->right);
        
        return t1;
    }
};