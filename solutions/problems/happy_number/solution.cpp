class Solution {
public:
    bool isHappy(int n) 
    {
        int a,sum;
        while(n!=1 && n!=4)   //n!=4 used for time limit error  
        {
            sum=0;
            while(n>0)
            {
                a=n%10;
                sum+=a*a;
                n=n/10;
            }
            n=sum;
        } 
        if(n==1)
        {
            return true;
        }  
        return false;
    }
};