class Solution {
public:
    int uniqueMorseRepresentations(const vector<string>& words) {
        vector<string> dict={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s; // создает некое множество(одинаковые строки не повторяются)
        for(string word:words)// Для каждого слова из данных
        {
            string w="";
            for(char ch:word) // для каждого символа строки
                w+=dict[ch-'a'];// находим строку для данного символа слова(собираем слово)
            
                s.insert(w);// добавим 1 слово по азбуке морзе
                

        }
        return s.size();// кол-во различных слов
    }
};
