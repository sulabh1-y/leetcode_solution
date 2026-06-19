class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans;
        int a=0;
        for(int i=0;i<candies.size();i++)
        {
            if(a<candies[i])
            {
                a=candies[i];
            }
        }    
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=a)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};