// https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>>ans;
        if(nums.size()<4)
            return ans; 
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
        for(int p=i+1;p<nums.size()-2;p++)
        {
               if(p>i+1 && nums[p]==nums[p-1])
                continue;
            for(int j = p+1,k = nums.size()-1;j<k;)
            {
                    if((j>p+1 && nums[j]==nums[j-1])|| nums[i]+nums[j]+nums[k]+nums[p]<target)
                    {
                        j++;
                    } 
                else
                {
                    if((k<nums.size()-1 && nums[k]==nums[k+1] )|| nums[i]+nums[j]+nums[k]+nums[p]>target)
                    {
                        k--;
                    }
                else 
                {
                    ans.push_back({nums[i],nums[j],nums[k],nums[p]});
                    j++;
                    k--;
                }
            }
            }
         }
        }
        return ans;
        
    }
};
