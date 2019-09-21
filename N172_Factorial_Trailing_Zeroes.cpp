// https://leetcode.com/problems/factorial-trailing-zeroes/
class Solution {
public:
    int trailingZeroes(int n) {
        int k=0;
        while(n>0)
        {
            k+=n/5;
            n=n/5;
        }
         return k;   
    }
};
