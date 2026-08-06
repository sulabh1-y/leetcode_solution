class Solution {
public:
    int numberOfMatches(int n) 
    {
        int matches=0;
        int advance=0;
        while(n>1)
        {
            if(n%2==0)
            {
                matches+=n/2;
                advance=n/2;
                n=advance;
            }   
            else 
            {
                matches+=(n-1)/2;
                advance=(n-1)/2+1;
                n=advance;
            }
        }
        return matches;
    }
};
