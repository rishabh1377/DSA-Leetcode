class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>   freq;
        int n = grid.size();
         for(auto row : grid){
            for(int num : row){
                freq[num]++;
            }
        }
        int repeat = -1; 
        int missing = -1;
        for(int i = 1; i <= n*n; i++){
            if(freq[i] == 2) repeat = i;
            if(freq[i] == 0) missing = i;
        }
        return { repeat, missing};
    }
};