// https://leetcode.com/problems/shortest-path-with-alternating-colors/
class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<vector<pair<int,int>>> graph(n);
        for(auto red:red_edges)
        {
            graph[red[0]].push_back({red[1],0});// каждому ребру соответствуют. вершины
        }
         for(auto blue:blue_edges)
        {
            graph[blue[0]].push_back({blue[1],1});
        }
        vector<int> dist(n,-1);
        vector<vector<bool>> used(n,vector<bool>(2,false));//посещенные вершины, 2 - кол-во цветов.
        queue<pair<int,int>> que;
        que.push({0,0});
        dist[0]=0;
        used[0][0]=true;
        used[0][1]=true;
        que.push({0,1});
        int depth = 1;
        while(!que.empty())
        {
            int siz = que.size();
            for(int i=0;i<siz;i++)
            {
                pair<int,int> cur = que.front();
                que.pop();
                for(auto par: graph[cur.first])//берем все вершины соотв. cur
                {
                    if(!used[par.first][par.second]&&cur.second!=par.second)//разные цвета
                    {
                        que.push(par);
                        if(dist[par.first]==-1)
                            dist[par.first]=depth;
                        used[par.first][par.second]=true;
                    }     
                }
            }
            depth++;
        }
        return dist;
    }
};
