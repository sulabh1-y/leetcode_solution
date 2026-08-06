class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int count = 0;
        int size = flowerbed.size();

        for(int i = 0; i < size; i++)
        {
            if(flowerbed[i] == 0)
            {
                int prev = 0, next = 0;
                if(i > 0)
                {
                    prev = flowerbed[i - 1];
                }
                if(i < size - 1)
                {
                    next = flowerbed[i + 1];
                }
                if(prev == 0 && next == 0)
                {
                    flowerbed[i] = 1;
                    count++;
                    
                    if(count >= n)
                        return true;
                }
            }
        }
        return count >= n;
    }
};