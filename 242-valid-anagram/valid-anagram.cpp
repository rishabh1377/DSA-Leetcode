class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> s1;
        unordered_map<char, int> s2;

        for (auto x : s) {
            s1[x]++;
        }
        for (auto x : t) {
            s2[x]++;
        }
        return s1 == s2;
    }
};