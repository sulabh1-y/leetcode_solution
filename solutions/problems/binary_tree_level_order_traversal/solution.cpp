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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return {};
        }
        else
        {
            TreeNode* q[20000];
            int f=-1,r=-1;
            q[++r]=root;
            while(f<r)
            {
                int n=r-f;
                vector<int> level;
                for(int i=0;i<n;i++)
                {
                    TreeNode* temp=q[++f];
                    level.push_back(temp->val);
                    if(temp->left!=NULL)
                    {
                        q[++r]=temp->left;
                    }
                    if(temp->right!=NULL)
                    {
                        q[++r]=temp->right;
                    }
                }
                result.push_back(level);
            }
        }
        return result;
    }
};