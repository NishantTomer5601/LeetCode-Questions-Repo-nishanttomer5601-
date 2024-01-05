// class Solution {
// public:

// int solve(int i, int prevIndex,vector<int>& arr, int n,vector<vector<int>> &dp){

//     //base case:
//     if(i==n) return 0;

//     if(dp[i][prevIndex+1]!=-1) return dp[i][prevIndex+1];

//     //take waala part:
//     int take=0;
//     int nottake=0;
//     if(prevIndex==-1 || arr[i]>arr[prevIndex]){
//          take=1+ solve(i+1,i,arr,n,dp);
//     }
    
    
//     nottake=solve(i+1,prevIndex,arr,n,dp);

//     return dp[i][prevIndex+1]=max(take,nottake);

// }


// int lengthOfLIS(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> dp(n,vector<int> (n+1,-1));
//         return solve(0,-1,nums,n,dp);
        
//     }
// };


class Solution {
public:

int solve(int i, int prevIndex,vector<int>& arr, int n,vector<vector<int>> &dp){

    //base case:
    if(i==n) return 0;

    if(dp[i][prevIndex+1]!=-1) return dp[i][prevIndex+1];

    //take waala part:
    int take=0;
    int nottake=0;
    if(prevIndex==-1 || arr[i]>arr[prevIndex]){
         take=1+ solve(i+1,i,arr,n,dp);
    }
    
    
    nottake=solve(i+1,prevIndex,arr,n,dp);

    return dp[i][prevIndex+1]=max(take,nottake);

}


int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return solve(0,-1,nums,n,dp);
        
    }
};
