class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int low = 0; int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                return true;
            }
            if(nums[low] == nums[mid] && nums[high] == nums[mid]){
                high = high-1;
                low = low +1;
                continue;
            }
            if(nums[mid]>=nums[low] ){
                if(nums[low]<=k && k<nums[mid]){
                    high = mid - 1;
                } 
                else {
                    low = mid+1;
                }

            }
           else{
                if(nums[mid]<=k && k<=nums[high]){
                    low = mid + 1;
                } 
                else {
                    high = mid-1;
                }

            }

        }
        return false;
        
    }
};