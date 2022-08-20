class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string str="abcdefghijklmnopqrstuvwxyz";
        int first=0,second=0,target=0;
        int n=firstWord.length();
        int m=secondWord.length();
        int p=targetWord.length();
        
        for(int i=0;i<firstWord.length();i++){
            int val=str.find(firstWord[i]);
            first+=val*pow(10,n-1-i);
        }
        
        for(int i=0;i<secondWord.length();i++){
            int val=str.find(secondWord[i]);
            second+=val*pow(10,m-1-i);
        }
        
        for(int i=0;i<targetWord.length();i++){
            int val=str.find(targetWord[i]);
            target+=val*pow(10,p-1-i);
        }
        
        if(first+second==target){
            return true;
        }
        return false;
    }
};