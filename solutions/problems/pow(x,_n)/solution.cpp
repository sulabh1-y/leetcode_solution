class Solution {
public:
    double myPow(double x, int n) 
    {
        long long exp=n;
        double power=1.0;
        if(exp<0)
        {
            x=1/x;
            exp=-exp;
        }
        while(exp>0)
        {
            if(exp%2==1)
            {
                power*=x;
            }
            x*=x;
            exp/=2;
        }
        return power;
        /*double power=1.0;
        if(n<0)
        {
            n= -n;
            for(int i=0; i<n; i++)
            {
                power=power*x;
            }
            power=1/power;
        }
        else
        {
            for(int i=0;i<n;i++) 
            {
                power=power*x;
            }   
        }
        return power;*/
    }
};