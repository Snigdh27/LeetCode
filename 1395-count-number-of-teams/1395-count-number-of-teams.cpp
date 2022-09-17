class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count=0;
        int n=rating.size();
        
        for(int i=0;i<n;i++){
            int x1=0,x2=0,y1=0,y2=0;
            for(int j=0;j<n;j++){
                if(j<i){
                    if(rating[j]<rating[i])
                        x1++;
                    else
                        x2++;
                }
                else if(j>i){
                    if(rating[j]<rating[i])
                        y1++;
                    else
                        y2++;
                }
            }
            count+=x1*y2+x2*y1;
        }
        
        return count;
    }
};