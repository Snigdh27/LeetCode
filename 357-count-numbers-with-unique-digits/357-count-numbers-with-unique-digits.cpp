class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int sum=1,last=1;
        
        if(n>0){
            for(int i=0;i<n;i++){
                sum+=9*last;
                last*=(10-i-1);
            }
        }
        
        return sum;
        
    }
};