class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_needed = 0;   
        int extra_closers = 0; 
        for (char ch : s) {
            if (ch == '(') {
                open_needed++;
            } else {
                
                if (open_needed > 0) {
                    open_needed--;
                } else {
                    
                    extra_closers++;
                }
            }
        }

        
        return open_needed + extra_closers;
    }
};