class Solution {
public:
    string defangIPaddr(string address) 
    {
        string result="";
        for(int i=0;i<address.length();i++)
        {
            char c=address[i];
            if(c == '.')
            {
                result+="[.]";
            }
            else 
            {
                result+=c;
            }
        }
        return result;
    }
};
