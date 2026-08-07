/*class Solution {
public:
    string makeFancyString(string s) 
    {
        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
                if(count>=2)
                {
                    s.erase(i,1);
                    i--;
                    count=1;
                }
            }
            else
            {
                count=0;
            }
        }
        return s;
    }
};*/
class Solution {
public:
    string makeFancyString(string s) 
    {
        string ans = "";
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(i > 0 && s[i] == s[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if(count < 3)
            {
                ans += s[i];
            }
        }
        return ans;
    }
};
