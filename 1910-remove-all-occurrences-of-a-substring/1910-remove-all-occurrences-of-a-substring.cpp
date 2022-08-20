class Solution {
public:
    string removeOccurrences(string s, string part) {
        auto x=s.find(part);
        
        while(x<s.length()){
            s.erase(x,part.length());
            x=s.find(part);
        }
        
        return s;
    }
};