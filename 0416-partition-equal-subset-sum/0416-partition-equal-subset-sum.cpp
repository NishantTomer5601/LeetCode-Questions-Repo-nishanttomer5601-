class Solution {
public:
   bool solve(vector<int>& nums, int i,int sum,vector<vector<int>> &dp){

       //base case:
       if(sum==0) return true;
       if(i==0) return (sum==nums[i] || sum==0);
       if(dp[i][sum]!=-1)  return dp[i][sum];


       bool include=false;
       if(sum>=nums[i])
       include=solve(nums,i-1,sum-nums[i],dp);

       bool exclude=solve(nums, i-1, sum,dp);

       return dp[i][sum]=(include||exclude);
       

   }



    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
       

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum&1) return false;
        sum=sum/2;
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));

        return solve(nums,n-1,sum,dp);
        
    }
};

