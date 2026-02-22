class Solution {
public:
    int mySqrt(int x) 
    {
        int sol=0;
        for(long long i=0;i<=x;i++)
        {
            long long n=i*i;
            if(n<=x)
            {
                sol=i;
            }
            else
            {
                break;
            }
        }
        return sol;
    }
};