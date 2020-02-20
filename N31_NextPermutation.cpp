// https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int i = nums.size()-1;
        while(i>0 && nums[i-1]>=nums[i])
        {
            i--;
        }
    if(i==0) 
    {
        reverse(nums.begin(),nums.end());
        return;
    }
        int mx = nums[i];// берем максимальный справа.
        int mxi = i;
    //    auto it = upper_bound(nums.rbegin(),nums.rend()-i,nums[i-1]);
    for(int j = nums.size()-1;j>i;j--)
    {
        if(nums[j]<mx && nums[j]>nums[i-1])
        {
            mx=nums[j];// ищем минимум справа
            mxi=j;
        }
    }
        swap(nums[i-1],nums[mxi]);// swap
        sort(nums.begin()+i,nums.end());// sort справа.
    }
};
