class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            int m=s.size()-1,j=0;
            bool ispal=true;
            while(j < m)
            {
                if(s[j] != s[m])
                {
                    ispal=false;
                }
                j++;
                m--;
            }
            if(ispal==true)
            {
                return s;
            }
        }
        return "";
    }
};