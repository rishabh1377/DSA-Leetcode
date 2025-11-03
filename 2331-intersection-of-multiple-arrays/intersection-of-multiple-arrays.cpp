class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        set<int> common(nums[0].begin(), nums[0].end());
        for (int i = 1; i < nums.size(); i++) {
            set<int> current(nums[i].begin(), nums[i].end());
            set<int> temp;
            for (int x : common) {
                if (current.count(x))
                    temp.insert(x);
            }
            common = temp;
        }
        return vector<int>(common.begin(), common.end());
    }
};