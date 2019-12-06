// https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
  int neighbour(vector<vector<int>>&grid,int r,int c,vector<vector<bool>>& bol)
  {
      int count=0;
        if(r-1>=0 && grid[r-1][c]==1 && bol[r-1][c])
        {
            grid[r-1][c]=2;
            bol[r-1][c]=false;
            count++;
        }
                if(r+1<grid.size() && grid[r+1][c]==1 && bol[r+1][c])
        {
                    bol[r+1][c]=false;
            grid[r+1][c]=2;
            count++;
        }
                if(c-1>=0 && grid[r][c-1]==1 && bol[r][c-1])
        {
                    bol[r][c-1]=false;
            grid[r][c-1]=2;
            count++;
        }
                if(c+1<grid[0].size() && grid[r][c+1]==1 && bol[r][c+1])
        {
               bol[r][c+1]=false;
            grid[r][c+1]=2;
            count++;
        }
        return count;
  }
    int orangesRotting(vector<vector<int>>& grid) {
        int min=0;
                int p;
            do
            {
                vector<vector<bool>>bol(grid.size(),vector<bool>(grid[0].size(),true));
             p=0;
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[0].size();j++)
                {
                  if(grid[i][j]==2 && bol[i][j])
                    p+=neighbour(grid,i,j,bol);
                }
            }
                if(p>0)
                    min++;
            } while(p>0);
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
            return min;
    }
};
