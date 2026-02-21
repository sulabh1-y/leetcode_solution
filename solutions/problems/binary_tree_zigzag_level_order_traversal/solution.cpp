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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        else 
        {
            TreeNode* q[20000];
            int f=-1,r=-1;
            q[++r]=root; 
            bool flag=true;    
            while(f<r)
            {
                int n=r-f;
                vector<int> zigzag(n);
                for(int i=0;i<n;i++)
                {
                    TreeNode* temp=q[++f];
                    if(flag)
                    {
                        zigzag[i]=temp->val;
                    }
                    else
                    {
                        zigzag[n-1-i]=temp->val;
                    }
                    if(temp->left!=NULL)
                    {
                        q[++r]=temp->left;  
                    }    
                    if(temp->right!=NULL)
                    {
                        q[++r]=temp->right;
                    }
                }
                result.push_back(zigzag);
                flag=!flag;
            }
        }
        return result;
    }
};