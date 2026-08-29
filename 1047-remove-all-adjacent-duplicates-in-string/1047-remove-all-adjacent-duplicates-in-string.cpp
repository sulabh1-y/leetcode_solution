class Solution {
public:
    string removeDuplicates(string s) 
    {
        vector<char> ans;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            char c = s[i];
            if(!ans.empty() && ans.back() == c)
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(c);
            }
        }
        return string(ans.begin(), ans.end());
    }
};