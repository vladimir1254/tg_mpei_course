// https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       if(nums[0]>=target) return 0;
        if(nums[nums.size()-1]<target) return nums.size();
        int levo = 0;
        int pravo = nums.size();
        int mid;
        while(levo<=pravo)
        {
             mid = levo + (pravo - levo)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                levo = mid +1;
            else
                pravo = mid-1;
        }
        return levo;
    }
};
