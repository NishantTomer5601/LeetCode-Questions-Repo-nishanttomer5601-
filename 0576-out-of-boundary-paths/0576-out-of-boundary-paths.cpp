class Solution {
public:
    int mod=1e9+7;
    int count=0;
    int solve(int r, int c, int m, int  n,int mm, int moves,vector<vector<vector<int>>> &dp){
    if(moves==mm+1) return 0;
        if(r<0 || r>=m || c<0 || c>=n) {
           return 1;
        }
        if(dp[r][c][moves]!=-1) return dp[r][c][moves];
        //foure directions travel:
        long long up=0,ri=0,d=0,l=0;
         if(!(r<0 || r>=m || c<0 || c>=n)) 
       up= (solve(r-1,c,m,n,mm,moves+1,dp))%mod;
         if(!(r<0 || r>=m || c<0 || c>=n))  
       ri=up+ (solve(r,c+1,m,n,mm,moves+1,dp))%mod;
         if(!(r<0 || r>=m || c<0 || c>=n)) 
       d= ri+(solve(r+1,c,m,n,mm,moves+1,dp))%mod;
        if(!(r<0 || r>=m || c<0 || c>=n)) 
       l= d+(solve(r,c-1,m,n,mm,moves+1,dp))%mod;
        
        return dp[r][c][moves]=l%mod;
        
        
    }
    int findPaths(int m, int n, int mm, int r, int c) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>> (n+1,vector<int> (mm+3,-1)));
        return solve(r,c,m,n,mm,0,dp);
       // return count;
        
    }
};