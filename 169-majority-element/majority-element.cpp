class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> up;
        int n = nums.size(); 
        for (int i = 0; i < n; i++) {
            up[nums[i]]++;
        }
        n = n / 2;
        for (auto x : up) {
            if (x.second > n) {
                return x.first;
            }
        }
        return 0;
    }
};