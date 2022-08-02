class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &x:image){
            reverse(x.begin(),x.end());
            for(auto &v:x){
                v^=1;
            }
        }
        
        return image;
    }
};