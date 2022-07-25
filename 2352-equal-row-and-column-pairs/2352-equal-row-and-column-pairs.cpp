class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int k;
        int res=0,n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                bool isValid=1;
                for(k=0;k<n;k++){
                    if(grid[k][j]!=grid[i][k]){
                        isValid=0;
                    }
                    
                }
                res+=isValid;
            }
        }
        
        return res;
    }
};