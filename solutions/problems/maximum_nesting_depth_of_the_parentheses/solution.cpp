class Solution {
public:
    int maxDepth(string s) 
    {
        int n=s.length();
        int cur=0;
        int m=0;
        for(int i=0;i<n;i++)
        {
            char ch= s[i];
            if(ch=='(')
            {
                cur++;
                m=max(m,cur);
            }
            else if(ch==')')
            {
                cur--;
            }
        }
        return m;
    }
};