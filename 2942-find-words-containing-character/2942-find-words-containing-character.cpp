class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> ans;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            for(int j=0;j<s.size();j++)
            {
                char c=s[j];
                if(c==x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};