class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char, int> freq1;
        map<char, int> freq2;
        int length = word1.size();
        for (char c : word1) {
            freq1[c]++;
        }
        for (char c : word2) {
            freq2[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            if (abs(freq1[c] - freq2[c]) > 3)
                return false;
        }
        return true;
    } 
    
};