class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        
        int index = -1;
        int minCap = INT_MAX;

        for(int i = 0; i < capacity.size(); i++)
        {
            if(capacity[i] >= itemSize && capacity[i] < minCap)
            {
                minCap = capacity[i];
                index = i;
            }
        }

        return index;
    }
};