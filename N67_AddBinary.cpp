// https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
       int i = a.size()-1;
        int j = b.size()-1;
        int c = '0';
        string res;
        while(i>=0 || j>=0 || c=='1')
        {
            int sum = c + (i>=0 ? a[i--] : '0')+(j>=0 ? b[j--] : '0');
            if(sum=='1'+'1'+'1')
            {
                c='1';
                res.insert(0,1,'1');
            }
           else if(sum == '1'+'1'+'0')
            {
                c='1';
                res.insert(0,1,'0');
            }
          else    if(sum == '1'+'0'+'0')
            {
                c='0';
                res.insert(0,1,'1');
            }
          else    if(sum == '0'+'0'+'0')
            {
                c='0';
                res.insert(0,1,'0');
            }
           else res.insert(0,1,'0');                     
        }
        return res;
    }
};
