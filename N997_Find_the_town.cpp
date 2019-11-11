// https://leetcode.com/problems/find-the-town-judge/
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        set<int> a,b; 
        for(int i=1;i<=N;i++)
        {
            a.insert(i);
            b.insert(i);
        }
        for(int i=0;i<trust.size();i++)
        {
            a.erase(trust[i][0]);
        }
        
        if(!a.empty())
        {
            for(int i=0;i<trust.size();i++)
            {
                if(trust[i][1]==*a.begin())
                    b.erase(trust[i][0]);
            }
            b.erase(*a.begin());
            if (b.empty())
            return *a.begin();
            else
                return -1;
        }
        else
            return -1;
    }
};
