// https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int N) {
     if (N==0)
         return 0;
        if (N==1)
            return 1;
        else
        {
            return(fib(N-1)+fib(N-2));
        }
        
    }
};