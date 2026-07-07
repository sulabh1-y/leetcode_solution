class Solution {
public:
    int minRemoval(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int lengths=1;
        for (int j = 0; j < nums.size(); j++) 
        {
            while ((long long)nums[j] > (long long)nums[i] * k)
            {
                i++;
            }
            lengths = max(lengths, j - i + 1);
        }
        return nums.size() - lengths;
    }
};