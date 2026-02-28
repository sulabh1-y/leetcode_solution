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
    int get_height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=get_height(root->left);
        int rh=get_height(root->right);

        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        int bal=get_height(root->left)-get_height(root->right);
        if(bal<=1 && bal>=-1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        return false;
    }
};