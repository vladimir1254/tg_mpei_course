// https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
 vector<int>a;
    while(n!=1)
    {
        if(find(a.begin(),a.end(),n)==a.end()) a.push_back(n);
        else return false;
        int p =0;
        while(n>0)
        {
            p+=(n%10)*(n%10);
            n/=10;
        }
        n=p;
    }
    return true;
    }
};
