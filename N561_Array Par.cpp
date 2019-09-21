class Solution {
public:
    int arrayPairSum(vector<int>& a) {
         
        std::sort(a.begin(),a.end());
        int p=0;
        for(int i=0;i<a.size();i++)
        {
            if((i&1)==0)
            p+=a[i];
        }
            
        return move(p);
    }
};
