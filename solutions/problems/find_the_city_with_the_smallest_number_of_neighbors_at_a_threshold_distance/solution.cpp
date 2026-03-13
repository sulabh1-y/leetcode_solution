class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) 
    {
        vector<vector<int>> dist(n, vector<int>(n, 1000000000));
        int i, j, k;
        for(i = 0; i < n; i++)
        {
            dist[i][i] = 0;
        }
        for(i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            dist[u][v] = w;
            dist[v][u] = w;
        }
        // Floyd-Warshall
        for(k = 0; k < n; k++)
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(dist[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        int city = -1;
        int minReach = n;
        for(i = 0; i < n; i++)
        {
            int count = 0;
            for(j = 0; j < n; j++)
            {
                if(dist[i][j] <= distanceThreshold)
                {
                    count++;
                }
            }
            if(count <= minReach)
            {
                minReach = count;
                city = i;
            }
        }
        return city;
    }
};