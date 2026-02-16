class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int i = 0; int j = n-1;
        while(i<j){
                int width = j-i;
                int h = min(height[i], height[j]);
                int water = width*h;
                ans = max(ans,water);
                if(height[i]<height[j]){
                    i++;
                }
                else j--;
        }
        return ans;


        
        
    }
};
