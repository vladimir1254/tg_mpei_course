// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1)
            return nums.size();
        
        for(auto i = nums.begin()+1;i!=nums.end();i++)
            if(*i==*(i-1))
            {
                nums.erase(i-1);
                i--;
            }
        return nums.size();
    }
};
