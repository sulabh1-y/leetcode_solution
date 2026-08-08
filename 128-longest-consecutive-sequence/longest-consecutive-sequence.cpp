class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int length = 1;
        int maxLen = 1;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i+1] == nums[i] + 1)
            {
                length++;
            }
            else if(nums[i+1] != nums[i])
            {
                length = 1;
            }
            maxLen = max(maxLen, length);
        }
        return maxLen;
    }
};