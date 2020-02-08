// https://leetcode.com/problems/3sum-closest/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3) return 0;
       int res=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int i= 0;
        while(i<nums.size())
        {
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target) return sum;
                if(abs(sum-target)<abs(res-target))
                    res=sum;
                if(sum>target)
                    k--;
                else
                    j++;
            }
            
            i++;
        }
        return res;
       }
};
