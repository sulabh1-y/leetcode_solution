class Solution {
public:
    string decodeString(string s) {
        stack<int> count;
        stack<string> st;
        string curr = "";
        int num = 0;
        for (char c : s) 
        {
            if (isdigit(c)) 
            {
                num = num * 10 + (c - '0');
            } 
            else if (c == '[') 
            {
                count.push(num);
                st.push(curr);
                num = 0;
                curr = "";
            } 
            else if (c == ']') 
            {
                int k = count.top(); count.pop();
                string temp = curr;
                string repeated = "";
                for (int i = 0; i < k; i++)
                {
                    repeated += temp;
                }
                curr = st.top() + repeated;
                st.pop();
            } 
            else 
            {
                curr += c;
            }
        }
        return curr;
    }
};