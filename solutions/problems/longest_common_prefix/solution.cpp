

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // 1. Strings ko alphabetical order mein sort karo
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string result = "";
        
        // 2. Sirf pehle aur aakhri word ko compare karo
        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                break; // Jahan match toot gaya, wahin ruk jao
            }
        }
        
        return result;
    }
};