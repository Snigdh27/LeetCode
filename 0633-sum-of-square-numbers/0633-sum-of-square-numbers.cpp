class Solution {
public:
    bool judgeSquareSum(int c) {
        long left=0,right=(long)sqrt(c);
        
        while(left<=right){
            long temp=left*left+right*right;
            
            if(temp<c){
                left++;
            }
            else if(temp>c){
                right--;
            }
            
            else{
                return true;
            }
        }
        
        return false;
    }
};