class Solution {
public:
    bool checkString(string s) {
        int countA=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                countA++;
            }
            
        }
        
        int i=0,countA1=0;
        while(i<s.length() && s[i]!='b'){
            countA1++;
            i++;
        }
        
        //cout<<countA<<" "<<countA1<<endl;
        
        return countA==countA1?true:false;
    }
};