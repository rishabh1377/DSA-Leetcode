class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int end = 0;
        int min_length = INT_MAX;
        int sum =0;
        
        for(int start = 0; start< nums.size(); start++){
            sum += nums[start];
            while(sum>=target){
                min_length = min(min_length,start-end+1);
                sum -= nums[end];
                end++;
            }
        }
        return (min_length == INT_MAX) ? 0:min_length;
    }
};