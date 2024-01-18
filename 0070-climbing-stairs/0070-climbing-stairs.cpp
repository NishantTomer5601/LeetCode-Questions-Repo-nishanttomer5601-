class Solution {
private:
    int solve(int i,int n,vector<int>& dp){
        // bc
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
int result=0;
        int ans1=solve(i+1,n,dp);
        int ans2=solve(i+2,n,dp);

        result=ans1+ans2;

        return dp[i]=result;
    }

public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(0,n,dp);
        
    }
};