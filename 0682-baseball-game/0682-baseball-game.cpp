class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        int n=operations.size();
        vector<int> ans;
        int sum=0;
        string s;
        for(int i=0;i<n;i++)
        {
            s=operations[i];
                
            if(s=="+")
            {
                int p = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(p);
            }
            else if(s=="D")
            {
                int q = 2 * ans.back(); 
                ans.push_back(q);
            }
            else if(s=="C")
            {
                ans.pop_back();
            }
            else
            {
                int m=stoi(s);
                ans.push_back(m);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
};