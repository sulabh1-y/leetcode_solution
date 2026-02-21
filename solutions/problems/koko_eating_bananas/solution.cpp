class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, int k)
    {
        int totalHours=0;
        for(int i=0;i<piles.size();i++)
        {
            totalHours+= ceil((double)piles[i]/k);
        }
        return totalHours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low=1;
        int high= *max_element(piles.begin(), piles.end());
        
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(canEatAll(piles,h,mid))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};