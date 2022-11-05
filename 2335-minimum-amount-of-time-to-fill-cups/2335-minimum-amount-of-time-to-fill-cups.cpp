class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum=0,maxVal=0;
        for(int i=0;i<amount.size();i++){
            maxVal=max(amount[i],maxVal);
            sum+=amount[i];
        }
        
        return max(maxVal,(sum+1)/2);
    }
};