class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int i = 0;
        int j = nums.size() - 1;
        int Fposition = -1;
        int Lposition = -1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (nums[mid] == x) {
                Fposition = mid;
                j = mid - 1;
            } else if (nums[mid] > x) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        if (Fposition == -1) {
            return {-1, -1};
        } else {
            int i = Fposition;
             int j = nums.size() - 1;
            while (i <= j) {
                int mid = (i + j) / 2;
                if (nums[mid] == x) {
                    Lposition = mid;
                     i = mid + 1; 
                } else if (nums[mid] > x) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            }
        }
        return {Fposition , Lposition};
    }
};