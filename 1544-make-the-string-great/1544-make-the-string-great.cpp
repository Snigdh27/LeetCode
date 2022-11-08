class Solution {
public:
    string makeGood(string s) {
        string str;
        
        for(char x:s){
            if(!str.empty() && abs(str.back()-x)==32){
                str.pop_back();
            }
            else{
                str.push_back(x);
            }
        }
        
        return str;
    }
};