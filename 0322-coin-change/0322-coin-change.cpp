 class Solution {
public:
    int solve(vector<int> &num, int x,int i,vector<vector<int>> &dp){

    //base cases:
    if (i == 0) {
      if (x % num[0] == 0)
        return x / num[0];
      else
        return 1e9;
    }

    
    if(dp[i][x]!=-1) return dp[i][x];

        int exclude=solve(num,x,i-1,dp);
        int include=1e9;
        if(num[i]<=x)
        include=1+solve(num,x-num[i],i,dp);

        return dp[i][x]=min(include,exclude);
    

}

 int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    vector<vector<int>> dp(n,vector<int> (amount+1,-1));
    int ans=solve(coins,amount,n-1,dp);
    return ans==1e9?-1:ans;
        
    }
}; 
