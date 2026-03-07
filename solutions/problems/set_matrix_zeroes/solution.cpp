class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        size_t m = matrix.size();
        size_t n = matrix[0].size();
        if (m == 0) return;
        
        vector<bool> rowFlags(m, false);
        vector<bool> colFlags(n, false);

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) { 
                if (matrix[i][j] == 0) {
                    rowFlags[i] = true;
                    colFlags[j] = true;
                }
            }
        }

    
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowFlags[i] || colFlags[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};