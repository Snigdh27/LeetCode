class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         vector<string>ans(score.size(),"");
        
        if(score.size()<1){
            return ans;
        }
        vector<pair<int,int>>vec;
        for(int i=0;i<score.size();i++){
            vec.push_back({score[i],i});
        }
        
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        
        if(score.size()==1){
            ans[vec[0].second]="Gold Medal";
            return ans;
        }
        if(score.size()==2){
            ans[vec[0].second]="Gold Medal";
            ans[vec[1].second]="Silver Medal";
            return ans;
        }
        if(score.size()==3){
            ans[vec[0].second]="Gold Medal";
        ans[vec[1].second]="Silver Medal";
        ans[vec[2].second]="Bronze Medal";
            return ans;
        }
        
        else{
            ans[vec[0].second]="Gold Medal";
        ans[vec[1].second]="Silver Medal";
        ans[vec[2].second]="Bronze Medal";
        
        for(int i=3;i<score.size();i++){
            int num=i;
            ans[vec[i].second]=to_string(num+1);
        }
        
        }
        
        return ans;
    }
};