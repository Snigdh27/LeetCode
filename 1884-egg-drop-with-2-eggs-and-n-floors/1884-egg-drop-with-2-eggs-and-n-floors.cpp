class Solution {
public:
    int twoEggDrop(int n) {
        int i=1,moves=1;
        while(i<n){
            moves++;
            i+=moves;
        }
        return moves;
    }
};