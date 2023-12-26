
class Solution {
public:
    #define MOD 1000000007
    int dp[32][1002];
    
    int solve(int i, int k, int target){
        if(i==0 && target==0) return 1;
        if(i<=0 || target<=0) return 0;
        if(dp[i][target] != -1) return dp[i][target];
     
        int sum=0;
        for(int in=1;in<=k;in++){
            sum = (sum % MOD + solve(i-1,k,target-in)%MOD)%MOD;
        }
        dp[i][target] = sum;
        return sum;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
};