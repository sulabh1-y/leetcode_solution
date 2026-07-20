#include <string>

class Solution {
public:
    int titleToNumber(std::string columnTitle) 
    {
        int result=0;
        for (int i=0;i<columnTitle.size();++i) {
            char c=columnTitle[i];
            result=result*26+(c-'A'+1);
        }
        return result;
    }
};

