class Solution {
public:
    int res=0;
    int integerReplacement(int n) {
        
        if(n==1){
            return res;
        }
        if(n==3){
            res+=2;
            return res;
        }
        if(n==INT_MAX){
            return 32;
        }
        
        res++;
        if(n%2!=0){
            if((n+1)%4==0){
                return integerReplacement(n+1);
            }
            else{
                return integerReplacement(n-1);
            }
        }
        else{
            return integerReplacement(n/2);
        }
        
    }
};