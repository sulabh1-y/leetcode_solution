class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int sum=0,p=1;
        int temp=n;
        while(temp>0)
        {
            int r=temp%10;
            sum+=r;
            p*=r;
            temp=temp/10;
        }
        int d=sum+p;
        if(n%d==0)
        {
            return true;
        }
        return false;
    }
};