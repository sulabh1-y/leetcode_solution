class Solution {
public:
    int addDigits(int num) 
    {
        int a,sum;
        while(num>=10)
        {
            sum=0;
            while(num>0)
            {
                a=num%10;
                sum+=a;
                num=num/10;
            }
            num=sum;
        }   
        return sum;
    }
};

// alternate method = return (num == 0) ? 0 : 1 + (num - 1) % 9;