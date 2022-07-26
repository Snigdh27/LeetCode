class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        
        int sum=0,index=0;

        for(int i=satisfaction.size()-1;i>=0;i--){
            sum+=satisfaction[i];
            if(sum<0)
                break;
            
            index+=sum;
        }
        
        return index;
    }
};