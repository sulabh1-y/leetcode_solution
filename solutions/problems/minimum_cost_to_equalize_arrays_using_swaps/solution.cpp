class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> torqavemin = nums1;
        
        int n = nums1.size();
        
        unordered_map<int,int> f1, f2, total;
        
        for(int x : nums1) {
            f1[x]++;
            total[x]++;
        }
        
        for(int x : nums2) {
            f2[x]++;
            total[x]++;
        }
        
        for(auto &p : total) {
            if(p.second % 2) return -1;
        }
        
        int cost = 0;
        
        for(auto &p : total) {
            int x = p.first;
            int need = p.second / 2;
            
            if(f1[x] > need) {
                cost += f1[x] - need;
            }
        }
        
        return cost;
    }
};