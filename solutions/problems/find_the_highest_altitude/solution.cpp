class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int maxH=0;
        int TotalSum=0;
        for(int i=0;i<gain.size();i++)
        {
            TotalSum+=gain[i];
            maxH=max(maxH,TotalSum);
        }
        return maxH;
    }
};