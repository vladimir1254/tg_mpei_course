// https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res=0;
        int p =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=val)
                res++;
            else
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return res;
    }
};
