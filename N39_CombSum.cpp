// https://leetcode.com/problems/combination-sum/
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        if(candidates.empty())
            return res;
    create(res,target,{},0,candidates,0,0);
        return res;
    }
    void create(vector<vector<int>>& res,int target,vector<int> sum,int cur,vector<int> cand,int k,int ss)
    {
        if(ss>target || ss+cur>target)
        {
            ss=0;
            return;
         
        }
        if(cur!=0)
        sum.push_back(cur);
        if(ss + cur== target) 
        {
            res.push_back(sum);
            ss=0;
        }
        else
        {
            ss+=cur;
            for(int z=k;z<cand.size();z++)
            {
                create(res,target,sum,cand[z],cand,z,ss);
            }
        }
        
    }
};
