class Solution {
public:
    int findPeakElement(vector<int>& arr) {
          int max = max_element(arr.begin(),arr.end())-arr.begin();

        return max;
    }
};