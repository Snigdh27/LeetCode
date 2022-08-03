class Solution {
public:
    
    int reverseNum(int num){
        int reverse=0;
        while(num>0){
            int temp=num%10;
            reverse=reverse*10+temp;
            num=num/10;
        }
        
        //cout<<reverse<<endl;
        return reverse;
    }
    
    bool isSameAfterReversals(int num) {
        int mod=1e6+2;
        
        int number=reverseNum(reverseNum(num)%mod);
        
        
        return number==num;
    }
};