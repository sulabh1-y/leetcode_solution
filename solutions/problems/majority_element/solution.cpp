class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=0;
        int key=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            if(count==0)
            {
                key=num;
            }
            if(num==key)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return key;
    }
};