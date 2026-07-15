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
    int CountNodes(TreeNode* root, int val)
    {
        int count=0;
        if(root==NULL)
        {
            return 0;
        }
        if(val<=root->val)
        {
            val=root->val;
            count=1;
        }
        count+=CountNodes(root->left,val);
        count+=CountNodes(root->right,val);
        return count;
    }
    int goodNodes(TreeNode* root) 
    {
        return CountNodes(root, INT_MIN);
    }
};