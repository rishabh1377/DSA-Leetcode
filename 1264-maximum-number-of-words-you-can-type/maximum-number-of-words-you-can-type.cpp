class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        vector<string> words;
        string w;
        for (; ss >> w;)
            words.push_back(w);
        int count = 0;
        for (int i = 0; i < (int)words.size(); ++i)
            if (words[i].find_first_of(brokenLetters) == string::npos)
                ++count;
        return count;
    }
};
