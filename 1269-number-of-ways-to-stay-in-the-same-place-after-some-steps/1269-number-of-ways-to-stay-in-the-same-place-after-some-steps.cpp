class Solution {
public:
    int mod=1e9+7;
    
    int solve(int i,int n,int k,int steps,vector<vector<int>> &dp){
        //base case:
        if(i<0 || i>=n) return 0;
        if(k==steps){
            if(i==0) return 1;
            return 0;
        }
        if(dp[i][k]!=-1) return dp[i][k];
        
        int left=0,right=0,same=0;
        same=solve(i,n,k+1,steps,dp)%mod;
        left=solve(i-1,n,k+1,steps,dp)%mod;
        right=solve(i+1,n,k+1,steps,dp)%mod;
        
        return dp[i][k]=((left%mod+same%mod)%mod+right%mod)%mod;
        
    }
    
    
    int numWays(int steps, int arrLen) {
        vector<vector<int>> dp(steps+1,vector<int> (steps+1,-1));
        return solve(0,arrLen,0,steps,dp);
        
    }
};

