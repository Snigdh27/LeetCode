class Solution {
public:
    string toHex(int num) {
        unsigned int num1=num;
        string ans="";
        if(num==0){
            return "0";
        }
        while(num1!=0){
            int temp=num1%16;
            
                switch(temp){
                    case 10:
                        ans+="a";
                        break;
                    case 11:
                        ans+="b";
                        break;
                    case 12:
                        ans+="c";
                        break;
                    case 13:
                        ans+="d";
                        break;
                    case 14:
                        ans+="e";
                        break;
                    case 15:
                        ans+="f";
                        break;
                    default:
                        ans+=to_string(temp);
                        break;
                }
            num1=num1/16;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};