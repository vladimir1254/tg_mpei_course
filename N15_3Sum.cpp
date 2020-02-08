// https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
                vector<vector<int>>ans;
        if(nums.size()<3)
            return ans; 
        map<set<int>,int>key;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j = i+1,k = nums.size()-1;j<k;)
            {
            // auto k=find(nums.begin()+j+1,nums.end(),-nums[i]-nums[j]);
                    if((j>i+1 && nums[j]==nums[j-1])|| nums[i]+nums[j]+nums[k]<0)
                    {
                        j++;
                    } 
                else
                    if((k<nums.size()-1 && nums[k]==nums[k+1] )|| nums[i]+nums[j]+nums[k]>0)
                    {
                        k--;
                    }
                else 
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};
