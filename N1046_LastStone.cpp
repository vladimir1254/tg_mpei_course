// https://leetcode.com/problems/last-stone-weight/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1)
    
        {
            sort(stones.begin(),stones.end());
           // cout<<" kol= "<<stones[stones.size()-1]<<" ";
          //  cout<<"  size ="<<stones.size()<<" ";
            if(stones[stones.size()-1]==stones[stones.size()-2])
                stones.erase(stones.begin()+stones.size()-2,stones.end());
            else
            {
            stones[stones.size()-1]-=stones[stones.size()-2];
                stones.erase(stones.begin()+stones.size()-2,stones.end()-1);
                }
            
        }
        if(stones.size()==1)
            return stones[0];
        else
            return 0;
    }
};
