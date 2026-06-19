class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int a=INT_MIN;
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(a<nums[i])
            {
                a=nums[i];
                b=i;
            }
        }   
        return b;
    }
};