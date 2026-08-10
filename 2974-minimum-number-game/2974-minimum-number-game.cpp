class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        int min=0;
        int n=nums.size();
        vector<int> arr;
        int alice,bob;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            alice=nums[i];
            bob=nums[i+1];
            arr.push_back(bob);
            arr.push_back(alice);
            i++;
        }
        return arr;
    }
};