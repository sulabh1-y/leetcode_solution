class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) 
    {
        string result = "";
        for (int i = 0; i < words.size(); i++) 
        {
            long long sum = 0;
            for (int j = 0; j < words[i].size(); j++) 
            {
                char ch = words[i][j];
                sum += weights[ch - 'a'];
            }
            int rem = sum % 26;
            result += ('z' - rem);
        }
        return result;
    }
};