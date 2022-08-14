class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int temp=capacity;
        
        for(int i=0;i<plants.size();i++){
            if(temp<plants[i]){
                steps+=i*2;
                temp=capacity;
                
            }
            temp-=plants[i];
            
        }
        
        return steps+plants.size();
    }
};