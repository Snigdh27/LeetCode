class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastIdx(26,0);
        
        for(int i=0;i<s.length();i++){
            lastIdx[s[i]-'a']=i;
        }
        
        vector<bool>seen(26,false);
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            int curr=s[i]-'a';
            if(seen[curr])
                continue;
            while(st.size()>0 && st.top()>s[i] && i<lastIdx[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
        
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};