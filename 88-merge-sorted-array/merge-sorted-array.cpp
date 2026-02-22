class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          vector<int> newVec(nums1.begin(), nums1.begin() + m);
        newVec.insert(newVec.end(),nums2.begin(), nums2.begin() + n);
        sort(newVec.begin(), newVec.end());
        nums1 = newVec;
    }
};