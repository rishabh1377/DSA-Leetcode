class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = 1;
       unordered_set<int> st;
       for(auto it : nums){
        st.insert(it);
       }
       while(st.find(n)!= st.end()){
        n++;
       }
       return n;
    }
};