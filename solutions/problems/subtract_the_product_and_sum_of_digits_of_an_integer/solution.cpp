class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int sum=0,p=1,rem=0;
        while(n>0)
        {
            rem=n%10;
            p*=rem;
            sum+=rem;
            n=n/10;

        }
        return p-sum;
        
    }
};