class Solution {
public:
    
    bool isPrime(int num){
        
        if(num==0 || num==1){
            return false;
        }
        
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                return false;
            }
        }
        
        return true;
    };
    
    int countPrimeSetBits(int left, int right) {
        int count=0;
        
        for(int i=left;i<=right;i++){
            int cnt=__builtin_popcount(i);
            if(isPrime(cnt)){
                count++;
            }
        }
        
        return count;
    }
};