// https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
            sum+=nums[i];
        return (n*(n+1))/2-sum;
     /*   vector<bool> fn(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            fn[nums[i]]=true;
        }
        for(int i = 0;i<nums.size();i++)
            if(fn[i]==false) return i;
        return nums.size();
    */
    }
};
