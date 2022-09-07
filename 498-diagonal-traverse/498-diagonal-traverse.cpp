class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        vector<int>ans;
        
        if(mat.size()==0 || mat[0].size()==0){
            return ans;    
        }
        
        int n=mat.size(),m=mat[0].size();
        int row=0,col=0;
        bool up=true;
        
        while(row<n && col<m){
            if(up){
                while(row>0 && col<m-1){
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                ans.push_back(mat[row][col]);
                if(col==m-1){
                    row++;
                }
                else{
                    col++;
                }
            }
            else{
                while(col>0 && row<n-1){
                    ans.push_back(mat[row][col]);
                    col--;
                    row++;
                }
                ans.push_back(mat[row][col]);
                if(row==n-1){
                    col++;
                }
                else{
                    row++;
                }
            }
            up=!up;
            
        }
        
        return ans;
        
    }
};