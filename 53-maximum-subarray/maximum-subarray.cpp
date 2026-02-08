class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; int maxin = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            maxin = max(sum,maxin);
            if(sum<0){
                sum = 0;
            }
        }
        return maxin;
    }
};