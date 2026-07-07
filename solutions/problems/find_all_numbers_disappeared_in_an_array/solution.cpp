class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int index=1,i=0;
        int n=nums.size();
        while(index <= n)
        {
            if(i < n && nums[i] == index)
            {
                while(i < n && nums[i] == index) 
                {
                    i++;
                }
            }
            else
            {
                ans.push_back(index);
            }
            index++; 
        }
        return ans;
    }
};