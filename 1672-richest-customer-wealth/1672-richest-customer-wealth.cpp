class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int n=accounts.size();
        int m=accounts[0].size();
        int wealth=0;
        for(int i=0;i<n;i++)
        {
            int max=0;
            for(int j=0;j<m;j++)
            {
                max+=accounts[i][j];
            }
            if(max>wealth)
            {
                wealth=max;
            }
        }
        return wealth;
    }
};