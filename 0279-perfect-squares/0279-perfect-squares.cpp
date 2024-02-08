class Solution {
public:
    int solve( vector<int> &v,int i, int n,int target,vector<vector<int>> &dp){
        
        //base case:
        if(target==0){
            return 0;
        }
        if(target<0) return 1e7;
        if(i==n){
            return 1e6;
            
        }
        if(dp[i][target]!=-1) return dp[i][target];
        
        //exc:
        int exc=1e5;
        exc=solve(v,i+1,n,target,dp);
       int inc=1e5;
        if(target-v[i]>=0)
            inc= min(1+solve(v,i+1,n,target-v[i],dp), 1+solve(v,i,n,target-v[i],dp));
        
        return dp[i][target]=min(inc,exc);
        
        
    }
    
    int numSquares(int n) {
        vector<int> v;
        int x=1;
        v.push_back(x);
        for(int i=2;i<n && i*i<=n;i++){
            v.push_back(i*i);
           
        }
        //for(auto it:v) cout<<it<<" ";
        vector<vector<int>> dp(v.size()+1,vector<int>(n+1,-1));
        
        return solve(v,0,v.size(),n,dp);
      
    }
};