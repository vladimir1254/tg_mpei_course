// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        if(nums.size()<1)
            return {-1,-1};
        int levo = 0;
        int pravo = nums.size();
        int i=levo+(pravo - levo)/2;
        int k = 1;
        while(i<nums.size() && nums[i]!=target && levo<=pravo)
        {
            if(nums[i]>target)
             pravo = i-1;
            else
            levo = i+1;
            i=levo +(pravo-levo)/2;
        }
        if(i>=nums.size() || nums[i]!=target)
            return {-1,-1};
        else
        {
            int k=i;
            while(k<nums.size() && nums[k]==target)
                k++;
            while(i>=0 && nums[i]==target )
                i--;
            return {i+1,k-1};
        }
    }
};
