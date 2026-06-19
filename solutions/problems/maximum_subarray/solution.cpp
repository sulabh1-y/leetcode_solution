class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxsum=INT_MIN;
        int cursum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            
            if(cursum<0)
            {
                cursum=0;
            }
            cursum+=nums[i];
            maxsum=max(maxsum,cursum);
        }
        return maxsum;
    }
};