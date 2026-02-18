class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(auto x: nums){
            freq[x]++;
        }
        int val;
        for(auto x: freq){
            if(x.second == 1){
                val =  x.first;
            }
        }
        return val;
        
    }
};