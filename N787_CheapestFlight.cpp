// https://leetcode.com/problems/cheapest-flights-within-k-stops/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        map<int,map<int,int>> m;
        for(auto flight:flights)
        m[flight[0]][flight[1]]=flight[2]; // храним откуда, куда и цену.
        map<int,int> cost = m[src]; // цена. в наш пункт(изначальная.)
        for(int i=0;i<K;i++)
        {
            map<int,int>temp=cost; 
            for(auto item:temp)
            {
                map<int,int> next=m[item.first];//
                for(auto f:next)
                {
                    if(cost.count(f.first))
                    {
                       cost[f.first]=min(cost[f.first], item.second+f.second);
                    }
                    else
                        cost[f.first]=item.second+f.second;
                }
            }
        }
        if(cost.count(dst))
        return cost[dst];
        else
            return -1;
    }
};
