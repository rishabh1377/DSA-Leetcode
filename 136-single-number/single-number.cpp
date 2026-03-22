class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>fq;
        for(auto x:nums){
            fq[x]++;
        }
        int ans;
        for(auto x:fq){
            if(x.second==1){
                ans = x.first;
            }
        }
        return ans;
    }
};