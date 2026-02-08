class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        stack<int> st;
        st.push(0);
        int n= s.length();
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                st.push(0);
            }
            else
            {
                int top=st.top();
                st.pop();
                int add = max(2*top,1);
                st.top()+=add;
            }
        }   
        return st.top();
    }
};