class Solution {
public:
    string replaceDigits(string s) {
        //string str="abcdefghijklmnopqrstuvwxyz";
        for(int i=1;i<s.size();i+=2){
            int temp=(s[i-1]-'a')+(s[i]-'0');
            s[i]=temp+'a';
        }
        
        return s;
    }
};