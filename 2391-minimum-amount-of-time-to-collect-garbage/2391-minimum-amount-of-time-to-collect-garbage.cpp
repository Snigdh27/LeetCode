class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int metal=0,paper=0,glass=0;
        int sum=0;
        
        for(int i=0;i<garbage.size();i++){
            for(auto it:garbage[i]){
                if(it=='G'){
                    glass=i;
                }
                else if(it=='P'){
                    paper=i;
                }
                else{
                    metal=i;
                }
                sum++;
            }
        }
        
        int total=sum;
        int res=0;
        
        for(int i=0;i<travel.size();i++){
            res+=travel[i];
            if(metal==i+1){
                total+=res;
            }
            if(paper==i+1){
                total+=res;
            }
            if(glass==i+1){
                total+=res;
            }
            
        }
        
        return total;
    }
};