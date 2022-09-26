class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        
        while((a|b)!=c){
            int a1=a%2;
            int b1=b%2;
            int c1=c%2;
            if((a1|b1) !=c1){
                ans+=a1+b1+c1;
            }
            
            a/=2;
            b/=2;
            c/=2;
        }
        
        return ans;
    }
};