class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int water=0;
        int maxHeight=height[0];
        int index=0;
        for(int i=1;i<n;i++)
        {
            if(height[i]>maxHeight)
            {
                maxHeight=height[i];
                index=i;
            }
        }
        int leftMax=height[0];
        for(int i=1;i<index;i++)
        {
            if(height[i]<leftMax)
            {
                water+=leftMax-height[i];
            }
            else
            {
                leftMax=height[i];
            }
        }
        int rightMax=height[n-1];
        for(int i=n-2;i>index;i--)
        {
            if(height[i]<rightMax)
            {
                water+=rightMax-height[i];
            }
            else
            {
                rightMax=height[i];
            }
        }
        return water;
    }
};