class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int ud=0,rl=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                ud++;
            }
            if(moves[i]=='R')
            {
                rl++;
            }
            if(moves[i]=='D')
            {
                ud--;
            }
            if(moves[i]=='L')
            {
                rl--;
            }
        }
        if(ud==0 && rl==0)
        {
            return true;
        }
        return false;
    }
};