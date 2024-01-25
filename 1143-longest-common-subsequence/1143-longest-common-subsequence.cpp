class Solution {
private:
   int solve(string& s, string& t,int i, int j, vector<vector<int>>& dp){
       if(i==s.length() || j==t.length())return 0;
      

       if(dp[i][j]!=-1) return dp[i][j];

       int ans=0;

       if(s[i]==t[j]) return dp[i][j]=1+solve(s,t,i+1,j+1,dp);

       else{
           return dp[i][j]=max(+solve(s,t,i,j+1,dp),+solve(s,t,i+1,j,dp));
       }

   }    
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(text1,text2,0,0,dp);
        
    }
};