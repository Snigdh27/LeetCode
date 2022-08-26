class Solution {
public:
    
    string isPowerOf(int n){
        string s=to_string(n);
        
        sort(s.begin(),s.end());
        
        return s;
    }
    
    bool reorderedPowerOf2(int n) {
        string num=isPowerOf(n);
        
        for(int i=0;i<30;i++){
            string powerOfTwo=isPowerOf(1<<i);
            
            if(num==powerOfTwo){
                return true;
            }
        }
        
        return false;
    }
};