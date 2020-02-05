// https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)
        return false;
    bool fl=true;
    int z=x;
    int k=0;
    while(z>0)
    {
        z/=10;
        k++;
    }
    int u=0;
    for(int i = k ;i>0;i--)
    {
        int z = x;
        for(int h = 0;h<i-1-u;h++)
        {
            z/=10;
        }
        if(z%10!=x%10) {
            return false;
        }
       x/=10;
        u++;
    }
    return true;
    }
};
