class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>counter;
       for(auto x:magazine) {
        counter[x]++;
       }
      for(auto x: ransomNote){
        counter[x]--;
        if(counter[x]<0){
            return false;
        }
        }
       return true;
    }
};