// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
     int levo = 0;
        int pravo = nums.size()-1;
        int mid;
        while(levo<=pravo)
        {
            mid = levo + (pravo-levo)/2;
            if(nums[mid]==target) return mid;
            if((nums[levo]<=target && target<nums[mid]) ||
               ((nums[mid]<nums[pravo])&&(nums[mid]>target || nums[pravo]<target)))
                pravo = mid-1;
            else levo = mid +1;
        }
        return -1;
    }
};
