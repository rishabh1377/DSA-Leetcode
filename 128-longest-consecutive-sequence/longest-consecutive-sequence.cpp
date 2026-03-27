class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int lastsmaller= INT_MIN;
        int curcount = 1;
        int longest= 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - 1 == lastsmaller) {
                curcount++;
                lastsmaller = nums[i];
            } else if (lastsmaller != nums[i]  ) {
                curcount = 1;
                lastsmaller = nums[i];
        }
        longest = max(longest, curcount);          
    }
    return longest;
    }
};