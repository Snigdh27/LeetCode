class Solution {
public:
    
    int maxFromGrid(vector<vector<int>>&grid,int x,int y)
    {
        int maxVal=INT_MIN;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                maxVal=max(maxVal,grid[i][j]);
            }
        }
        
        return maxVal;
    }
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                ans[i][j]=maxFromGrid(grid,i,j);
            }
        }
        
        return ans;
        
    }
};