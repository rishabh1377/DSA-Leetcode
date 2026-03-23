class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int left = 1;
        int right = 1;

        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = left;
            left *= nums[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }
};