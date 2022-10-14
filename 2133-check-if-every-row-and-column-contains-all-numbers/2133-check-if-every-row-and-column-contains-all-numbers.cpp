class Solution {
public:
    
    bool isSafe(vector<vector<int>>&matrix,int row,int col,int val){
        
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][col]==val){
                return false;
            }
            if(matrix[row][i]==val){
                return false;
            }
        }
        
        return true;
        
    }
    
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                int val=matrix[row][col];
                matrix[row][col]=0;
                if(isSafe(matrix,row,col,val)){
                    matrix[row][col]=val;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
        
    }
};