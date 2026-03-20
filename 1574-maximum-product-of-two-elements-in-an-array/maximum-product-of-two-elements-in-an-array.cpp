class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;

        if(nums.size()<=2){
            return (nums[0]-1)*(nums[1]-1);
        }
        else {
            for(int i = 0; i< nums.size();i++){
                for(int  j = i+1; j < nums.size(); j++){
                    maxi = max(maxi, (nums[i]-1)*(nums[j]-1));
                }
            }
         }
         return maxi;
    }
};