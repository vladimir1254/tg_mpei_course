// https://leetcode.com/problems/course-schedule/
class Solution {
public:
      bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> a(n);
        vector<int> key(n, 0), b;
        for (auto e : p)
            a[e[1]].push_back(e[0]), key[e[0]]++;   //  0 1 - a[курс][для каких нужен]
          // кол-во курсов для 1   ++
        for (int i = 0; i < n; ++i) // Для всех курсов 
            if (!key[i])  // если для курса не нужно ни 1
                b.push_back(i); // добавляем в вектор b
        for (int i = 0; i < b.size(); ++i)  // для всех курсов к которым не нужны ключи
            for (int j: a[b[i]])  // добавляем в итог если к курсу можно попасть через доступный [1 0] [0 2]
                if (--key[j] == 0) b.push_back(j); // если к курсу нужен только 1 ключ
        return b.size() == n;  // к каждому курсу можно добраться а) сразу(без ключей)
          // или б) по 1 дороге. граф без циклов.
    }
};
