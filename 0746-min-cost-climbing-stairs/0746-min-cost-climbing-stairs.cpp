
#include<bits/stdc++.h>
#include<math.h>
/*class Solution {
public:  

    int solve(vector<int>& cost,int n, vector<int>& dp){

        //Base case:
        if(n==0) return cost[0];
        if(n==1) return cost[1];

        //step 3:
        if(dp[n]!=-1){
            return dp[n];
        }

        //step 2:
        dp[n]=cost[n] + min(solve(cost,n-1,dp) , solve(cost,n-2,dp));
        return dp[n];

    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=size(cost);

        //step 1:
        vector<int> dp(n+1,-1);
        int ans=min(solve(cost,n-1,dp) , solve(cost,n-2,dp)) ;
        return ans;     
        
    }
};
*/

class Solution {
public:  

    int solve(vector<int>& cost,int i,int n, vector<int>& dp){

        //Base case:
        if(i==n) return 0;
        if(i>n) return INT_MAX;

        //step 3:
        if(dp[i]!=-1){
            return dp[i];
        }

        //step 2:
        dp[i]=cost[i] + min(solve(cost,i+1,n,dp) , solve(cost,i+2,n,dp));
        return dp[i];

    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=size(cost);

        //step 1:
        vector<int> dp(n+1,-1);
        int cc=solve(cost,0,n,dp);
        int dd=solve(cost,1,n,dp);
        int ans=min(cc ,dd ) ;
        return ans;     
        
    }
};