// https://leetcode.com/problems/word-ladder/
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
            if(beginWord==endWord)
                return 1;
            set<string> s;
            for(auto &word:wordList)
                s.insert(word);
            queue<pair<string,int>> que;
            que.push({beginWord,1});
                while(!que.empty())
                {
                    pair<string,int>cur=que.front();
                    que.pop();
                    if(cur.first == endWord)
                        return cur.second;
                    for(int i = 0;i<cur.first.size();i++)//для каждой буквы слова
                    {
                            char temp = cur.first[i];
                        for(char k='a';k<='z';k++)
                        {
                        
                            if(cur.first[i]!=k) cur.first[i]=k;// изменяем одну букву.
                        if(s.find(cur.first)!=s.end())
                        {
                            que.push({cur.first,cur.second+1});
                            s.erase(cur.first);    
                        }
                            cur.first[i]=temp;
                        }
                    }
                }
            return 0;
        
    }
};
