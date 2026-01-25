class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        int n=x,r;
        long long rev=0;
        while(x>0)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(n==rev)
        {
            return true;
        }
        return false;
    }
};