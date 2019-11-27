// https://leetcode.com/problems/course-schedule-ii/
class Solution {
public:
    // проверяем на цикличность. 
    // из задачи shedule I.
          bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> a(n);
        vector<int> key(n, 0), b;
        for (auto e : p)
            a[e[1]].push_back(e[0]), key[e[0]]++;
        for (int i = 0; i < n; ++i)
            if (!key[i])
                b.push_back(i);
        for (int i = 0; i < b.size(); ++i)
            for (int j: a[b[i]]) 
                if (--key[j] == 0) b.push_back(j); 
        return b.size() == n;
    }
    vector<int> create(int n,vector<vector<int>>p)
    {
        vector<vector<int>> a(n);
        vector<int> key(n, 0), b;
        for (auto e : p)
            a[e[1]].push_back(e[0]), key[e[0]]++;
        for (int i = 0; i < n; ++i)
            if (!key[i])
                b.push_back(i); // курсы к которым не нужны ключи.
        for (int i = 0; i < b.size(); ++i)
            for (int j: a[b[i]]) 
                if (--key[j] == 0) b.push_back(j); 
        return b;       
    }
    vector<int> findOrder(int num, vector<vector<int>>& p) {
        vector<int> result;
       if(!canFinish(num,p))// проверили на цикличность.
        return result;// вернули пустой массив.
        return create(num,p);
        
    }

};
