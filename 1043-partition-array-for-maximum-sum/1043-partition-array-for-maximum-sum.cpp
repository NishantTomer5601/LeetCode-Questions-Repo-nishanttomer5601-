class Solution {
private:

    int solve(vector<int>& arr, int k, int i,vector<int> &dp){

        // base case:
        if(i==arr.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        int maxi=INT_MIN;
        int maxSum=INT_MIN;
        int len=0;

        for(int j=i;(j<arr.size() && j<i+k);j++){
            len++;
            maxi=max(maxi,arr[j]);
            int sum=len* maxi + solve(arr,k,j+1,dp);
             maxSum=max(sum,maxSum);

        }

        return dp[i]=maxSum;

    }

public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,-1);
        return solve(arr,k,0,dp);
        
    }
};