// https://leetcode.com/problems/word-ladder-ii/
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
      unordered_set<string> used(wordList.begin(),wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        used.erase(beginWord);
        vector<vector<string>> res;
        bool path =false;
        while(!q.empty())
        {
            size_t size = q.size();
            set<string> Delword;
            for(size_t i=0;i<size;++i)
            {
                vector<string> vec = q.front();
                q.pop();
                if(vec.back()==endWord)
                {
                   path = true;
                    res.push_back(vec);
                }
                else
                {
                    string word = vec.back();
                    for(size_t i=0;i<word.size();++i)
                    {
                        char temp = word[i];
                    for(char c='a';c<='z';++c)
                    {
                        if(temp == c)
                        {
                        continue;
                        }
                     word[i]=c;
                            if(used.find(word)!=used.end())
                            {  
                                q.push(vec);
                                q.back().push_back(word);
                                Delword.insert(word);
                            }
                    }
                 word[i]=temp;  
                    }
                }
            }
            if(path)
            {
                break;
            }
            for(auto &word:Delword)
            {
                used.erase(word);
            }
        }
        return res;
    }
};
