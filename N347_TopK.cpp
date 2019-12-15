// https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++; // res[i] показывает кол-во числа i.
        // меняем ключ-значение местами.
        vector<vector<int>> vec(nums.size()+1);
        for(auto num:m)
            vec[num.second].push_back(num.first); // vec[i]  i - сколько раз встретилось число
        vector<int>res;
          for(int i=vec.size()-1;i>=0 && res.size()<k;--i)
          {
              for(int nm:vec[i])
              {
            res.push_back(nm);
                if(res.size()==k)
                    break;
                }
          }
   
        return res;
    }
};
