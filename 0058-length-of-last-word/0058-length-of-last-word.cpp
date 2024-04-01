class Solution {
public:
    int lengthOfLastWord(string s) {
      int ans=0;
      int n=s.length()-1;
      while(n>=0 && s[n] ==' '){
          n--;
      }
      for(int i=n;i>=0;i--){
          if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
              ans++;
          }
          else{     
              break;
          }
    
       }
      return ans;  
    }
};
