class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0,val=0;
        sort(tokens.begin(),tokens.end());
        int left=0,right=tokens.size()-1;
        while(left<=right){
            if(power>=tokens[left]){
                score+=1;
                power-=tokens[left];
                val=max(val,score);
                left++;
            }
            
            else if(score>0 && power<tokens[left]){
                power+=tokens[right];
                score-=1;
                val=max(val,score);
                right--;
            }
            else{
                return val;
            }
            
        }
        
        return val;
    }
};