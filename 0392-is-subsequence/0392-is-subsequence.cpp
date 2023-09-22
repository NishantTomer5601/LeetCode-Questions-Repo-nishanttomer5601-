class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        
        int i=0,j=0;
        while(i<n && j<m){
            char c=s[i];
            char ch=t[j];
          //  while(i<n && j<m){
                if(c==ch){
                    i++;j++;
                    // break;
                }
                else{
                    j++;
                }
                
        //    }
        }
        if(j>=m && i<n) return false;
        return true;
        
        
    }
};