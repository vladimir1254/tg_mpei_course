// https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       //sort(nums.begin(),nums.end(),[](int x,int y){return x>y;});
        sort(nums.rbegin(),nums.rend());
        return nums[k-1];
    }
};
