class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;

        while (left < right) {
            // 1. Choti height find karo
            int h = min(height[left], height[right]);
            
            // 2. Current area calculate karke max_water update karo
            int current_area = h * (right - left);
            max_water = max(max_water, current_area);

            // 3. Jo pillar chota hai, usse move karo
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
    }
};