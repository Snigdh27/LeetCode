class Solution {
public:
    
    bool isSafe(vector<vector<char>>&board,int row,int col,char ans){
        
        for(int i=0;i<9;i++){
            if(board[row][i]==ans){
                return false;
            }
            
            if(board[i][col]==ans){
                return false;
            }
            
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ans){
                return false;
            }
            
        }
        
        return true;
        
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]!='.'){
                    char ans=board[row][col];
                    board[row][col]='.';
                    if(isSafe(board,row,col,ans))
                        board[row][col]=ans;
                    else
                        return false;
                }                
            }
        }
        return true;
    }
};