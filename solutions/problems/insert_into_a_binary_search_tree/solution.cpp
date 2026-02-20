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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root==NULL)
        {
            return new TreeNode(val);
        }
        else
        {
            TreeNode *p=NULL, *cur=root;
            while(cur!=NULL)
            {
                p=cur;
                if(val>cur->val)
                {
                    cur=cur->right;
                }
                else
                {
                    cur=cur->left;
                }
            }
            if(val>p->val)
            {
                p->right=new TreeNode(val);
            }
            else if(val<p->val)
            {
                p->left=new TreeNode(val);
            }
        }
        return root;
    }
};