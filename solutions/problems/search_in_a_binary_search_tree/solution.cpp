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
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root==NULL)
        {
            return root;
        }
        else
        {
            TreeNode *cur=root;
            while(cur!=NULL)
            {
                if(val == cur->val)
                {
                    return cur;
                }
                else if(val>cur->val)
                {
                    cur=cur->right;
                }
                else
                {
                    cur=cur->left;
                }
            }
        }
        return NULL;
    }
};