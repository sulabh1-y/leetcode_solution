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
        int n=0;
        int sol(TreeNode* root)
        {
            if(root==NULL)
            {
                return 0;
            }
            int l=sol(root->left);
            int r=sol(root->right);
            n=max(n,l+r);
            return 1+ max(l,r);
        }
        int diameterOfBinaryTree(TreeNode* root) 
        {   
            sol(root);
            return n;
        } 
};