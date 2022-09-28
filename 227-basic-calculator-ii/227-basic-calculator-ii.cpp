class Solution {
public:
    
    bool isdigit(char ch){
        if(ch>='0' && ch<='9'){
            return true;
        }
        return false;
    }
    
    int calculate(string s) {
        stack<int>st;
        int n=s.length();
        int currentNum=0;
        
        char operation='+';
        
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(isdigit(curr)){
                currentNum=(currentNum*10)+(curr-48);
            }
            
            if(!isdigit(curr) && curr!=' ' || i==s.length()-1){
                if(operation=='+'){
                    st.push(currentNum);
                }
                else if(operation=='-'){
                    st.push(-currentNum);
                }
                else if(operation=='*'){
                    int top=st.top();
                    st.pop();
                    st.push(top*currentNum);
                }
                else if(operation=='/'){
                    int top=st.top();
                    st.pop();
                    st.push(top/currentNum);
                }
                currentNum=0;
                operation=curr;
            }
        }
        
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};