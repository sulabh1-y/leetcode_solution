class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<double> s(amount + 1, 0);
        s[0] = 1;

        for(int i = 0; i < coins.size(); i++)
        {
            for(int j = coins[i]; j <= amount; j++)
            {
                s[j] += s[j - coins[i]];
            }
        }

        return (int)s[amount];
    }
};