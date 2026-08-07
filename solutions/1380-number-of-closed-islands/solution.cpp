class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(grid[i][j]==0)
                {
                    bool closed=true;
                    dfs(grid, i, j, closed);
                    if(closed)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<int>>& grid, int i, int j, bool &closed)
    {
        int n=grid.size();
        int m=grid[0].size();

        if(i<0 || i>=n || j<0 || j>=m)
        {
            closed=false;
            return;
        }

        if(grid[i][j] == 1)
            return;

        grid[i][j] = 1;

        dfs(grid, i + 1, j, closed);
        dfs(grid, i - 1, j, closed);
        dfs(grid, i, j + 1, closed);
        dfs(grid, i, j - 1, closed);
    }
};
