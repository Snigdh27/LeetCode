class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n=len(word1)
        m=len(word2)
        j=0
        k=0
        s="";
        
        while j<n or k<m:
            if j<n:
                s+=word1[j]
                j=j+1
            if k<m:
                s+=word2[k]
                k=k+1
        return s