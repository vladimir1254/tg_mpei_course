// https://leetcode.com/problems/as-far-from-land-as-possible/
class Solution {
public:
    void dfs(vector<vector<int>>& gr,int i,int j,int dist,bool land = false)
    {       // в gr[i][j] записываем 1 - land , 0 - непосещенная вода, >=2  наше макс. расстояние.
     
        
        if(!land)// клетка не земля
        {
            if(i<0 || j<0 || i>=gr.size()|| j>=gr[0].size() || (gr[i][j]<=dist && gr[i][j]!=0)) return;
            gr[i][j]=dist;
        }
        dfs(gr,i-1,j,dist+1);
        dfs(gr,i+1,j,dist+1);
        dfs(gr,i,j-1,dist+1);
        dfs(gr,i,j+1,dist+1);
    }
    int maxDistance(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                   dfs(grid,i,j,1,true); 
            }
        int mx = -1;
                for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>1)
                mx = max(grid[i][j]-1,mx);
            }
        return mx;
        
    }
};
