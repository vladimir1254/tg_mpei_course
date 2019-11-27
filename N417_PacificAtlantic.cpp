// https://leetcode.com/problems/pacific-atlantic-water-flow/
class Solution {
public:
   void dfs(vector<vector<bool>>& visit,int i,int j,vector<vector<int>>& matrix)
    {
       
       visit[i][j]=true;
       int m=matrix.size();
       int n=matrix[0].size();
       // идем от краёв и visit = true если можем добраться до вершины(<=)
        if(i-1>=0 && visit[i-1][j]!=true &&matrix[i][j]<=matrix[i-1][j])
        dfs(visit,i-1,j,matrix);
       if(i+1<m&& visit[i+1][j]!=true && matrix[i][j]<=matrix[i+1][j])
           dfs(visit,i+1,j,matrix);
           if(j-1>=0 && visit[i][j-1]!=true && matrix[i][j]<=matrix[i][j-1])
            dfs(visit,i,j-1,matrix);
               if(j+1<n  && visit[i][j+1]!=true && matrix[i][j]<=matrix[i][j+1])
            dfs(visit,i,j+1,matrix);
    }
    
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        int m=matrix.size();
        vector<vector<int>> result;
       if(m==0)
           return result;
         int n=matrix[0].size();
        if(n==0)
            return result;
vector<vector<bool>> visitpacific(matrix.size(),vector<bool>(matrix[0].size()));                             //dfs
        vector<vector<bool>> visitatlantic(matrix.size(),vector<bool>(matrix[0].size()));
        for(int i = 0 ;i<m;i++)
        {
            dfs(visitpacific,i,0,matrix);
            dfs(visitatlantic,i,n-1,matrix);
        }
        for(int j=0;j<n;j++)
        {
            dfs(visitpacific,0,j,matrix);
                dfs(visitatlantic,m-1,j,matrix);
        }
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                
                if(visitpacific[i][j]&&visitatlantic[i][j])
                {
                    vector<int>a={i,j};
                    result.push_back(a);
                }
            }
        return result;
    }
};
