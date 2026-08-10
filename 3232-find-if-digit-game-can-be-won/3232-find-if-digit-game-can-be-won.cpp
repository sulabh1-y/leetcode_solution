class Solution {
public:
    bool canAliceWin(vector<int>& nums) 
    {
        int two=0,one=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] >= 10 && nums[i] <= 99)
            {
                two+=nums[i];
            }
            else
            {
                one+=nums[i];
            }
        }   
        if(two==one)
        {
            return false;
        } 
        return true;
    }
};